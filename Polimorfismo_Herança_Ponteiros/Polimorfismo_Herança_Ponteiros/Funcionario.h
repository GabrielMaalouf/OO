#pragma once
#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;

public:
    Funcionario(string nome);
    virtual ~Funcionario();

    virtual double calcularSalario() = 0; // método abstrato
    virtual void exibirInformacoes();
};
