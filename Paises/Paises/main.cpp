#include <iostream>
#include "Pais.h"

using namespace std;

int main() {
    // Criando países
    Pais brasil("BRA", "Brasil", 8515767.049);
    brasil.setPopulacao(193946886);

    Pais argentina("ARG", "Argentina", 2780400);
    argentina.setPopulacao(45195774);

    Pais paraguai("PRY", "Paraguai", 406752);
    paraguai.setPopulacao(7132530);

    Pais uruguai("URY", "Uruguai", 176215);
    uruguai.setPopulacao(3473730);

    Pais bolivia("BOL", "Bolívia", 1098581);
    bolivia.setPopulacao(11673021);

    Pais peru("PER", "Peru", 1285216);
    peru.setPopulacao(32971846);

    Pais colombia("COL", "Colômbia", 1138914);
    colombia.setPopulacao(50882884);

    Pais venezuela("VEN", "Venezuela", 916445);
    venezuela.setPopulacao(28435943);

    // Adicionando fronteiras
    brasil.adicionarFronteira(&argentina);
    brasil.adicionarFronteira(&paraguai);
    brasil.adicionarFronteira(&uruguai);
    brasil.adicionarFronteira(&bolivia);
    brasil.adicionarFronteira(&peru);
    brasil.adicionarFronteira(&colombia);
    brasil.adicionarFronteira(&venezuela);

    argentina.adicionarFronteira(&brasil);
    argentina.adicionarFronteira(&uruguai);
    argentina.adicionarFronteira(&paraguai);
    argentina.adicionarFronteira(&bolivia);

    paraguai.adicionarFronteira(&brasil);
    paraguai.adicionarFronteira(&argentina);
    paraguai.adicionarFronteira(&bolivia);

    uruguai.adicionarFronteira(&brasil);
    uruguai.adicionarFronteira(&argentina);

    bolivia.adicionarFronteira(&brasil);
    bolivia.adicionarFronteira(&argentina);
    bolivia.adicionarFronteira(&paraguai);
    bolivia.adicionarFronteira(&peru);

    peru.adicionarFronteira(&brasil);
    peru.adicionarFronteira(&bolivia);
    peru.adicionarFronteira(&colombia);

    colombia.adicionarFronteira(&brasil);
    colombia.adicionarFronteira(&peru);
    colombia.adicionarFronteira(&venezuela);

    venezuela.adicionarFronteira(&brasil);
    venezuela.adicionarFronteira(&colombia);

    // Exemplo de uso
    cout << "Densidade populacional do Brasil: "
        << brasil.calcularDensidade() << " hab/km²" << endl;

    cout << "Brasil e Uruguai são limítrofes? "
        << (brasil.isLimitrofe(uruguai) ? "Sim" : "Não") << endl;

    vector<Pais*> comuns = brasil.vizinhosEmComum(argentina);
    cout << "\nVizinhos em comum entre Brasil e Argentina:" << endl;
    for (Pais* pais : comuns) {
        cout << "- " << pais->getNome() << endl;
    }

    comuns = peru.vizinhosEmComum(colombia);
    cout << "\nVizinhos em comum entre Peru e Colômbia:" << endl;
    for (Pais* pais : comuns) {
        cout << "- " << pais->getNome() << endl;
    }

    comuns = bolivia.vizinhosEmComum(paraguai);
    cout << "\nVizinhos em comum entre Bolívia e Paraguai:" << endl;
    for (Pais* pais : comuns) {
        cout << "- " << pais->getNome() << endl;
    }

    return 0;
}