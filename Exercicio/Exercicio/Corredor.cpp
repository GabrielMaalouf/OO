#include "Atleta.h"
#include "Competicao.h"
#include "Corredor.h"
#include "Data.h"
#include "Nadador.h"

Corredor::Corredor(string nome, int idade, float p, Competicao c) : Atleta(nome, idade), peso(p), competicao(c) {}

void Corredor::imprime_competicao() {
	competicao.imprime_info();
}

void Corredor::imprime_info() {
	cout << "[Corredor] ";
	Atleta::imprime_info();
	cout << "Peso: " << peso << " kg" << endl;
	imprime_competicao();
}