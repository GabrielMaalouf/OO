#pragma once
#include "Fruta.h"

#include <iostream>
#include <string>

using namespace std;


class Banana : public Fruta {
	
protected:
	string tipo;

public:
	string getTipo();
	void setTipo(string tipo);
	void exibe_info();

	Banana(float preco, double imposto, string tipo);

};

