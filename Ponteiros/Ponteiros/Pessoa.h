#pragma once
#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {

protected:
	string nome;
	int idade;

public:
	Pessoa(string nome, int idade);

	int getIdade();
	string getNome();

	void setIdade(int idade);
	void setNome(string nome);
	virtual void imprime_dados();
};

#endif