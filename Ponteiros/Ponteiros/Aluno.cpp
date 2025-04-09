#include "Pessoa.h"
#include "Aluno.h"

Aluno::Aluno(string nome, int idade, int nota) : Pessoa(nome, idade), nota(nota){}

int Aluno::getNota() {
	return nota;
}

void Aluno::setNota(int nota) {
	this->nota = nota;
}

void Aluno::imprime_dados() {
	Pessoa::imprime_dados();
	cout << "Nota: " << getNota() << endl;
}