#include "Engenheiro.h"
#include "Gerente.h"
#include <iostream>
using namespace std;

int main() {
    Funcionario* f1 = new Engenheiro("Gabriel", 5000.0, 10);  // 10 horas extras
    Funcionario* f2 = new Gerente("Ana", 8000.0, 2000.0);      // bônus de R$2000

    f1->exibirInformacoes();
    cout << "-------------------------" << endl;
    f2->exibirInformacoes();

    delete f1;
    delete f2;

    return 0;
}
