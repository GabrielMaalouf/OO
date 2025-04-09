#pragma once
#ifndef HERANCA_H
#define HERANCA_H

#include <iostream>
#include <string>

using namespace std;

class Corredor : public Atleta {

protected:
	float peso;
	Competicao competicao;

public:
	Corredor(string nome, int idade, float p, Competicao c);
	void imprime_competicao();
	void imprime_info();
};

#endif