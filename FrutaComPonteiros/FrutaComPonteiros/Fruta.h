#pragma once
#ifndef FRUTA_H
#define FRUTA_H

#include <iostream>
#include <string>

using namespace std;

class Fruta {
protected:
    float preco;
    double imposto;

public:
    Fruta(float preco, double imposto);

    float getPreco();
    void setPreco(float preco);
    double getImposto();
    void setImposto(double imposto);
    double calcula_preco();
};

#endif