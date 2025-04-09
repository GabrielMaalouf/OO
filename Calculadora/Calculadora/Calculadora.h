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

    // M�todos de acesso
    void setCor(string cor);
    void setMemoria(int memoria);

    string getCor();
    int getMemoria();

    // M�todos de opera��es matem�ticas
    float soma(float valor1, float valor2);
    float subtrai(float valor1, float valor2);
    float multiplica(float valor1, float valor2);
    float divide(float valor1, float valor2);

    int eleva_ao_quadrado(int valor1);
    int eleva_ao_cubo(int valor1);

    // M�todo para imprimir informa��es
    void imprime_info();
};

#endif
