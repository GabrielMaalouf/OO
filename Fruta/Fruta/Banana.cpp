#include "Banana.h"
#include "Fruta.h"

Banana::Banana(float preco, double imposto, string tipo) : Fruta(preco, imposto), tipo(tipo){}

string Banana::getTipo() {
	return tipo;
}

void Banana::setTipo(string tipo) {
	this->tipo = tipo;
}

void Banana::exibe_info() {
	cout << "Produto: Banana" << endl;
	cout << "Tipo: " << getTipo() << endl;
	cout << "Pre�o Original: R$ " << getPreco() << endl;
	cout << "Pre�o com Imposto: R$ " << calcula_preco() << endl;
}