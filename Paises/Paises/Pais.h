#ifndef PAIS_H
#define PAIS_H

#include <string>
#include <vector>

using namespace std;

class Pais {
private:
    string codigoISO;
    string nome;
    long long populacao;
    double dimensao;
    vector<Pais*> fronteiras;

public:
    // Construtor
    Pais(const string& iso, const string& nome, double dimensao);

    // Getters e Setters
    string getCodigoISO() const;
    void setCodigoISO(const string& iso);

    string getNome() const;
    void setNome(const string& nome);

    long long getPopulacao() const;
    void setPopulacao(long long populacao);

    double getDimensao() const;
    void setDimensao(double dimensao);

    // Fronteiras
    void adicionarFronteira(Pais* pais);

    // Verificações e cálculos
    bool isEqual(const Pais& outro) const;
    bool isLimitrofe(const Pais& outro) const;
    double calcularDensidade() const;
    vector<Pais*> vizinhosEmComum(const Pais& outro) const;
};

#endif