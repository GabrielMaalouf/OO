#include "Fruta.h"

Fruta::Fruta(float preco, double imposto) : preco(preco), imposto(imposto) {}

float Fruta::getPreco() {
    return preco;
}

void Fruta::setPreco(float preco) {
    this->preco = preco;
}

double Fruta::getImposto() {
    return imposto;
}

void Fruta::setImposto(double imposto) {
    this->imposto = imposto;
}

double Fruta::calcula_preco() {
    return preco + (preco * imposto);
}
