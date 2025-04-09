#include "Atleta.h"
#include "Competicao.h"
#include "Corredor.h"
#include "Data.h"
#include "Nadador.h"

Atleta::Atleta(string nome, int idade) {
	this->nome = nome;
	this->idade = idade;
};

void Atleta::setNome(string nome) {
	this->nome = nome;
}

void Atleta::setIdade(int idade) {
	this->idade = idade;
}

void Atleta::imprime_info() {
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
}