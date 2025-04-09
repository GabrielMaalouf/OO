#include "Melancia.h"
#include "Fruta.h"

Melancia::Melancia(float preco, double imposto, float preco_adicional, bool is_epoca) : Fruta(preco, imposto), preco_adicional(preco_adicional), is_epoca(is_epoca){}

float Melancia::getPrecoAdicional() {
    return preco_adicional;
}

void Melancia::setPrecoAdicional(float preco_adicional) {
    this->preco_adicional = preco_adicional;
}

bool Melancia::getIsEpoca() {
    return is_epoca;
}

void Melancia::setIsEpoca(bool is_epoca) {
    this->is_epoca = is_epoca;
}

double Melancia::calcula_preco_final() {
    if (is_epoca) {
        return preco;
    }
    else {
        return preco + preco_adicional + (preco * imposto);
    }
}

void Melancia::exibe_info() {
    cout << "Melancia fora de época: R$ " << calcula_preco_final() << endl;
    cout << "Melancia em época: R$ " << calcula_preco_final() << endl;
}