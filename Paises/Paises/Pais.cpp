#include "Pais.h"
#include <iostream>

Pais::Pais(string codigo, string nome, double dimensao) {
    this->codigoISO = codigo;
    this->nome = nome;
    this->dimensao = dimensao;
    this->populacao = 0;
    this->totalFronteiras = 0;

    for (int i = 0; i < 40; i++) {
        fronteiras[i] = nullptr;
    }
}

void Pais::setPopulacao(long long pop) {
    this->populacao = pop;
}

void Pais::adicionarFronteira(Pais* pais) {
    if (pais == this) return;

    for (int i = 0; i < totalFronteiras; i++) {
        if (fronteiras[i] == pais) {
            return; // já está na lista
        }
    }

    if (totalFronteiras < 40) {
        fronteiras[totalFronteiras] = pais;
        totalFronteiras++;
    }
}

string Pais::getNome() {
    return nome;
}

string Pais::getCodigoISO() {
    return codigoISO;
}

long long Pais::getPopulacao() {
    return populacao;
}

double Pais::getDimensao() {
    return dimensao;
}

double Pais::calcularDensidade() {
    if (dimensao == 0) return 0;
    return populacao / dimensao;
}

bool Pais::isIgual(Pais* outro) {
    return this->codigoISO == outro->getCodigoISO();
}

bool Pais::isLimitrofe(Pais* outro) {
    for (int i = 0; i < totalFronteiras; i++) {
        if (fronteiras[i] == outro) {
            return true;
        }
    }
    return false;
}

void Pais::mostrarVizinhosEmComum(Pais* outro) {
    cout << "Vizinhos em comum entre " << this->nome << " e " << outro->getNome() << ":\n";

    bool achou = false;
    for (int i = 0; i < totalFronteiras; i++) {
        if (fronteiras[i] != nullptr && outro->isLimitrofe(fronteiras[i])) {
            cout << "- " << fronteiras[i]->getNome() << "\n";
            achou = true;
        }
    }

    if (!achou) {
        cout << "Nenhum vizinho em comum.\n";
    }
}
