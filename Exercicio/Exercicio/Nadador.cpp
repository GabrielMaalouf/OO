#include "Atleta.h"
#include "Competicao.h"
#include "Corredor.h"
#include "Data.h"
#include "Nadador.h"

Nadador::Nadador(string nome, int idade, string Categoria) : Atleta(nome, idade), Categoria(Categoria) {}


void Nadador::setCategoria(string Categoria) {
	this->Categoria = Categoria;
}

void Nadador::imprime_info() {
	cout << "[Nadador] ";
	Atleta::imprime_info();
	cout << "Categoria: " << Categoria << endl;
}