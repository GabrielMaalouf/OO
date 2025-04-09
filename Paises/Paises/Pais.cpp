#include "Pais.h"
#include <algorithm>

using namespace std;

Pais::Pais(const string& iso, const string& nome, double dimensao)
    : codigoISO(iso), nome(nome), dimensao(dimensao), populacao(0) {
}

string Pais::getCodigoISO() const {
    return codigoISO;
}

void Pais::setCodigoISO(const string& iso) {
    codigoISO = iso;
}

string Pais::getNome() const {
    return nome;
}

void Pais::setNome(const string& nome) {
    this->nome = nome;
}

long long Pais::getPopulacao() const {
    return populacao;
}

void Pais::setPopulacao(long long populacao) {
    this->populacao = populacao;
}

double Pais::getDimensao() const {
    return dimensao;
}

void Pais::setDimensao(double dimensao) {
    this->dimensao = dimensao;
}

void Pais::adicionarFronteira(Pais* pais) {
    if (pais != this && fronteiras.size() < 40 &&
        find(fronteiras.begin(), fronteiras.end(), pais) == fronteiras.end()) {
        fronteiras.push_back(pais);
    }
}

bool Pais::isEqual(const Pais& outro) const {
    return this->codigoISO == outro.codigoISO;
}

bool Pais::isLimitrofe(const Pais& outro) const {
    return find(fronteiras.begin(), fronteiras.end(), &outro) != fronteiras.end();
}

double Pais::calcularDensidade() const {
    if (dimensao == 0) return 0;
    return static_cast<double>(populacao) / dimensao;
}

vector<Pais*> Pais::vizinhosEmComum(const Pais& outro) const {
    vector<Pais*> comuns;
    for (Pais* pais : fronteiras) {
        if (outro.isLimitrofe(*pais)) {
            comuns.push_back(pais);
        }
    }
    return comuns;
}