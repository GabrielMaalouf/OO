#include "FuncionarioCaixa.h"
#include <cmath>

FuncionarioCaixa::FuncionarioCaixa(string nome, string endereco, Calculadora calculadora)
    : nome(nome), endereco(endereco), calculadora(calculadora) {}

float FuncionarioCaixa::soma(float valor1, float valor2) {
    return calculadora.soma(valor1, valor2);
}

float FuncionarioCaixa::subtrai(float valor1, float valor2) {
    return calculadora.subtrai(valor1, valor2);
}

float FuncionarioCaixa::multiplica(float valor1, float valor2) {
    return calculadora.multiplica(valor1, valor2);
}

float FuncionarioCaixa::divide(float valor1, float valor2) {
    if (valor2 != 0) {
        return calculadora.divide(valor1, valor2);
    }
    else {
        cerr << "Erro: divisão por zero!" << endl;
        return 0;
    }
}

Calculadora FuncionarioCaixa::getCalculadora() {
    return calculadora;
}

void FuncionarioCaixa::setCalculadora(Calculadora calculadora) {
    this->calculadora = calculadora;
}

int FuncionarioCaixa::eleva_ao_quadrado(int valor1) {
    return pow(valor1, 2);
}

int FuncionarioCaixa::eleva_ao_cubo(int valor1) {
    return pow(valor1, 3);
}


void FuncionarioCaixa::imprime_info() {
    cout << "= Informações do Funcionário =" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco << endl;
    calculadora.imprime_info();
}