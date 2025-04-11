#pragma once
#include "Funcionario.h"

class Engenheiro : public Funcionario {
private:
    double salarioBase;
    int horasExtras;

public:
    Engenheiro(string nome, double salarioBase, int horasExtras);
    double calcularSalario() override;
    void exibirInformacoes() override;
};
