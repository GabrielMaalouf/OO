#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade) : nome(nome), idade(idade){}

int Pessoa::getIdade() {
	return idade;
}

string Pessoa::getNome() {
	return nome;
}

void Pessoa::setIdade(int idade) {
	this->idade = idade;
}

void Pessoa::setNome(string nome) {
	this->nome = nome;
}

void Pessoa::imprime_dados() {
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
}