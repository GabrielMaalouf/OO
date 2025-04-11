#ifndef PAIS_H
#define PAIS_H

#include <string>
using namespace std;

class Pais {
private:
    string nome;
    string codigoISO;
    long long populacao;
    double dimensao;

    Pais* fronteiras[40];
    int totalFronteiras;

public:
    Pais(string codigo, string nome, double dimensao);

    void setPopulacao(long long pop);
    void adicionarFronteira(Pais* pais);

    string getNome();
    string getCodigoISO();
    long long getPopulacao();
    double getDimensao();
    double calcularDensidade();

    bool isIgual(Pais* outro);
    bool isLimitrofe(Pais* outro);

    void mostrarVizinhosEmComum(Pais* outro);
};

#endif
