#pragma once
#include "Pessoa.h"

#include <iostream>
#include <string>

using namespace std;

class Aluno : public Pessoa {

protected:
	int nota;

public:
	Aluno(string nome, int idade, int nota);

	int getNota();
	void setNota(int nota);
	void imprime_dados();
	
};
