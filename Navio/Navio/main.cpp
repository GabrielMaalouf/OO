#include <iostream>
#include "Navio.h"

using namespace std;

int main() {
    float h;

    cout << "Digite a dist�ncia h (cm) entre a linha d'�gua e a linha de projeto para o Navio Cargueiro: ";
    cin >> h;
    NavioCargueiro cargueiro(h);

    cout << "Digite a dist�ncia h para o Petroleiro: ";
    cin >> h;
    Petroleiro petroleiro(h);

    cout << "Digite a dist�ncia h para o Porta-Cont�iner: ";
    cin >> h;
    PortaConteiner conteiner(h);

    cout << "\n== Resultados ==\n";
    cout << "Navio Cargueiro:\n";
    cout << "Capacidade restante: " << cargueiro.calcularCapacidade() << " toneladas\n";
    cout << "Conceito: " << cargueiro.determinarConceito() << "\n";

    cout << "\nPetroleiro:\n";
    cout << "Capacidade restante: " << petroleiro.calcularCapacidade() << " toneladas\n";
    cout << "Conceito: " << petroleiro.determinarConceito() << "\n";

    cout << "\nPorta-Cont�iner:\n";
    cout << "Capacidade restante: " << conteiner.calcularCapacidade() << " toneladas\n";
    cout << "Conceito: " << conteiner.determinarConceito() << "\n";

    return 0;
}