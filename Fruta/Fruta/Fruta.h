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
	float getPreco();
	void setPreco(float preco);
	double calcula_preco();
	double getImposto();
	void setImposto(double imposto);

	Fruta(float preco, double imposto);

};

#endif