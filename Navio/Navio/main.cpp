#include <iostream>
#include "Navio.h"

using namespace std;

int main() {
    float h;

    cout << "Digite a distância h (cm) entre a linha d'água e a linha de projeto para o Navio Cargueiro: ";
    cin >> h;
    NavioCargueiro cargueiro(h);

    cout << "Digite a distância h para o Petroleiro: ";
    cin >> h;
    Petroleiro petroleiro(h);

    cout << "Digite a distância h para o Porta-Contêiner: ";
    cin >> h;
    PortaConteiner conteiner(h);

    cout << "\n== Resultados ==\n";
    cout << "Navio Cargueiro:\n";
    cout << "Capacidade restante: " << cargueiro.calcularCapacidade() << " toneladas\n";
    cout << "Conceito: " << cargueiro.determinarConceito() << "\n";

    cout << "\nPetroleiro:\n";
    cout << "Capacidade restante: " << petroleiro.calcularCapacidade() << " toneladas\n";
    cout << "Conceito: " << petroleiro.determinarConceito() << "\n";

    cout << "\nPorta-Contêiner:\n";
    cout << "Capacidade restante: " << conteiner.calcularCapacidade() << " toneladas\n";
    cout << "Conceito: " << conteiner.determinarConceito() << "\n";

    return 0;
}