#pragma once
#ifndef HERANCA_H
#define HERANCA_H

#include <iostream>
#include <string>

using namespace std;

class Competicao {

protected:
	string nomeCompeticao;
	Data DataCompeticao;

public:
	Competicao(string nomeCompeticao, Data DataCompeticao);

	void setNome(string nomeCompeticao);
	void imprime_info();
};

#endif