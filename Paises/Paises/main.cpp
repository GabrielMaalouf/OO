#include <iostream>
#include "Pais.h"

using namespace std;

int main() {
    Pais* brasil = new Pais("BRA", "Brasil", 8515767);
    brasil->setPopulacao(210000000);

    Pais* argentina = new Pais("ARG", "Argentina", 2780400);
    argentina->setPopulacao(45000000);

    Pais* paraguai = new Pais("PRY", "Paraguai", 406752);
    paraguai->setPopulacao(7000000);

    Pais* uruguai = new Pais("URY", "Uruguai", 176215);
    uruguai->setPopulacao(3400000);

    // Definindo fronteiras
    brasil->adicionarFronteira(argentina);
    brasil->adicionarFronteira(paraguai);
    brasil->adicionarFronteira(uruguai);

    argentina->adicionarFronteira(brasil);
    argentina->adicionarFronteira(paraguai);
    argentina->adicionarFronteira(uruguai);

    paraguai->adicionarFronteira(brasil);
    paraguai->adicionarFronteira(argentina);

    uruguai->adicionarFronteira(brasil);
    uruguai->adicionarFronteira(argentina);

    // Testes
    cout << "Densidade populacional do Brasil: " 
         << brasil->calcularDensidade() << " hab/km²\n";

    if (brasil->isLimitrofe(uruguai)) {
        cout << "Brasil e Uruguai são países vizinhos.\n";
    } else {
        cout << "Brasil e Uruguai NÃO são países vizinhos.\n";
    }

    brasil->mostrarVizinhosEmComum(argentina);

    // Liberando memória
    delete brasil;
    delete argentina;
    delete paraguai;
    delete uruguai;

    return 0;
}
