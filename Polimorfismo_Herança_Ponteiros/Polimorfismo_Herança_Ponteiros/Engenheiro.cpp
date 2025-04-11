#include "Engenheiro.h"
#include <iostream>
using namespace std;

Engenheiro::Engenheiro(string nome, double salarioBase, int horasExtras)
    : Funcionario(nome), salarioBase(salarioBase), horasExtras(horasExtras) {
}

double Engenheiro::calcularSalario() {
    return salarioBase + (horasExtras * 50.0); // R$50 por hora extra
}

void Engenheiro::exibirInformacoes() {
    cout << "Cargo: Engenheiro" << endl;
    Funcionario::exibirInformacoes();
}
