#pragma once
#ifndef HERANCA_H
#define HERANCA_H

#include <iostream>
#include <string>

using namespace std;

class Atleta {

protected:
	string nome;
	int idade;

public:
	void imprime_info();
	void setNome(string nome);
	void setIdade(int idade);

	Atleta(string nome, int idade);

};

#endif