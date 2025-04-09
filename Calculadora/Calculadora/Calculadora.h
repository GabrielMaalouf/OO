#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <iostream>
#include <string>

using namespace std;

class Calculadora {
private:
    int memoria;
    string cor;

public:
    // Construtores
    Calculadora();
    Calculadora(string cor);

    // Métodos de acesso
    void setCor(string cor);
    void setMemoria(int memoria);

    string getCor();
    int getMemoria();

    // Métodos de operações matemáticas
    float soma(float valor1, float valor2);
    float subtrai(float valor1, float valor2);
    float multiplica(float valor1, float valor2);
    float divide(float valor1, float valor2);

    int eleva_ao_quadrado(int valor1);
    int eleva_ao_cubo(int valor1);

    // Método para imprimir informações
    void imprime_info();
};

#endif
