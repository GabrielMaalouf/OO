#pragma once
#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;

public:
    Funcionario(string nome);
    virtual ~Funcionario();

    virtual double calcularSalario() = 0; // m�todo abstrato
    virtual void exibirInformacoes();
};
