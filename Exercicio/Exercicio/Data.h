#pragma once
#ifndef HERANCA_H
#define HERANCA_H

#include <iostream>
#include <string>

using namespace std;


class Data {

protected:
	int dia;
	int mes;
	int ano;

public:
	Data(int dia, int mes, int ano);
	Data();

	void setDia(int dia);
	void setMes(int mes);
	void setAno(int ano);

	void imprime_info();

};

#endif