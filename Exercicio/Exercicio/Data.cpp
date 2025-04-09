#include "Atleta.h"
#include "Competicao.h"
#include "Corredor.h"
#include "Data.h"
#include "Nadador.h"


Data::Data() {}

void Data::setDia(int dia) {
	this->dia = dia;
}

void Data::setMes(int mes) {
	this->mes = mes;
}

void Data::setAno(int ano) {
	this->ano = ano;
}

void Data::imprime_info() {
	cout << "Data: " << (dia < 10 ? "0" : "") << dia << "/"
		<< (mes < 10 ? "0" : "") << mes << "/"
		<< ano << endl;
}