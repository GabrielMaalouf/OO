#pragma once
#include "Fruta.h"

#include <iostream>
#include <string>

using namespace std;

class Melancia : public Fruta {

protected:
	bool is_epoca;
	float preco_adicional;

public:

	Melancia(float preco, double imposto, float preco_adicional, bool is_epoca);
	float getPrecoAdicional();
	void setPrecoAdicional(float preco_adicional);
	double calcula_preco_final();

	void exibe_info();

	bool getIsEpoca();
	void setIsEpoca(bool is_epoca);
};