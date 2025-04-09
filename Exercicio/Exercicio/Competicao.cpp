#include "Atleta.h"
#include "Competicao.h"
#include "Corredor.h"
#include "Data.h"
#include "Nadador.h"

Competicao::Competicao(string nomeCompeticao, Data DataCompeticao) {
	this->nomeCompeticao = nomeCompeticao;
	this->DataCompeticao = DataCompeticao;
};

void Competicao::setNome(string nomeCompeticao) {
	this->nomeCompeticao = nomeCompeticao;
}

void Competicao::imprime_info() {
	cout << "Nome da Competicao: " << nomeCompeticao << endl;
	DataCompeticao.imprime_info();
}