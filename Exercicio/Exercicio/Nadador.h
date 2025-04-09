#pragma once
#ifndef HERANCA_H
#define HERANCA_H

#include <iostream>
#include <string>

using namespace std;

class Nadador : public Atleta {

protected:
	string Categoria;

public:
	void setCategoria(string Categoria);
	Nadador(string nome, int idade, string Categoria);
	void imprime_info();

};

#endif