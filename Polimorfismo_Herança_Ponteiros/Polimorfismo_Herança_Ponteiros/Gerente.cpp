#include "Gerente.h"
#include <iostream>
using namespace std;

Gerente::Gerente(string nome, double salarioMensal, double bonus)
    : Funcionario(nome), salarioMensal(salarioMensal), bonus(bonus) {
}

double Gerente::calcularSalario() {
    return salarioMensal + bonus;
}

void Gerente::exibirInformacoes() {
    cout << "Cargo: Gerente" << endl;
    Funcionario::exibirInformacoes();
}
