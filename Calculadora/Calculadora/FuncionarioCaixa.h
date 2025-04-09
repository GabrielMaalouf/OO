#pragma once
#ifndef FUNCIONARIOCAIXA_H
#define FUNCIONARIOCAIXA_H

#include <iostream>
#include <string>
#include "Calculadora.h"

using namespace std;

class FuncionarioCaixa {

public:
    FuncionarioCaixa(string nome, string endereco, Calculadora calculadora);
    FuncionarioCaixa();

    void setNome(string nome);
    void setEndereco(string endereco);
    void setCalculadora(Calculadora calculadora);

    float soma(float valor1, float valor2);
    float subtrai(float valor1, float valor2);
    float multiplica(float valor1, float valor2);
    float divide(float valor1, float valor2);

    int eleva_ao_quadrado(int valor1);
    int eleva_ao_cubo(int valor1);

    string getNome();
    string getEndereco();
    Calculadora getCalculadora();

    void imprime_info();

private:
    string nome;
    string endereco;
    Calculadora calculadora;
};

#endif