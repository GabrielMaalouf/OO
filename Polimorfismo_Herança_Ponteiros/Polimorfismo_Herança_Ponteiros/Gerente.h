#pragma once
#include "Funcionario.h"

class Gerente : public Funcionario {
private:
    double salarioMensal;
    double bonus;

public:
    Gerente(string nome, double salarioMensal, double bonus);
    double calcularSalario() override;
    void exibirInformacoes() override;
};
