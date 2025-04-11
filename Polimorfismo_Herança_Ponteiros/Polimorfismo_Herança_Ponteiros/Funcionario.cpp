#include "Funcionario.h"
#include <iostream>
using namespace std;

Funcionario::Funcionario(string nome) : nome(nome) {}

Funcionario::~Funcionario() {}

void Funcionario::exibirInformacoes() {
    cout << "Nome: " << nome << endl;
    cout << "Salário: R$ " << calcularSalario() << endl;
}
