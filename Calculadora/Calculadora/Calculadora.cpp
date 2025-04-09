#include "Calculadora.h"
#include <cmath>

// Construtores
Calculadora::Calculadora() : memoria(0), cor("Preta") {}  // Inicializa com cor padrão "Preta"
Calculadora::Calculadora(string cor) : memoria(0), cor(cor) {}

// Métodos de acesso
void Calculadora::setCor(string cor) {
    this->cor = cor;
}

void Calculadora::setMemoria(int memoria) {
    this->memoria = memoria;
}

string Calculadora::getCor() {
    return cor;
}

int Calculadora::getMemoria() {
    return memoria;
}

// Métodos de operações matemáticas
float Calculadora::soma(float valor1, float valor2) {
    return valor1 + valor2;
}

float Calculadora::subtrai(float valor1, float valor2) {
    return valor1 - valor2;
}

float Calculadora::multiplica(float valor1, float valor2) {
    return valor1 * valor2;
}

float Calculadora::divide(float valor1, float valor2) {
    if (valor2 != 0) {
        return valor1 / valor2;
    }
    else {
        cerr << "Erro: divisão por zero!" << endl;
        return 0;
    }
}

int Calculadora::eleva_ao_quadrado(int valor1) {
    return pow(valor1, 2);
}

int Calculadora::eleva_ao_cubo(int valor1) {
    return pow(valor1, 3);
}

// Método para imprimir informações
void Calculadora::imprime_info() {
    cout << "=== Informações da Calculadora ===" << endl;
    cout << "Cor: " << cor << endl;
    cout << "Memória: " << memoria << endl;
    cout << "==================================" << endl;
}
