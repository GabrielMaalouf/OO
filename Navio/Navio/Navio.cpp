#include "Navio.h"

Navio::Navio(float h) : h(h) {
    C = 0;
    L = 0;
}

void Navio::setH(float h) {
    this->h = h;
}

float Navio::getH() const {
    return h;
}

float Navio::calcularCapacidade() const {
    return (C * L * h) / 100;
}

string Navio::determinarConceito() const {
    if (h <= 0) return "Plena Carga";
    else if (h <= 121) return "Flutuação Parcial";
    else return "Flutuação Leve";
}

// Cargueiro (ex: C=102, L=15)
NavioCargueiro::NavioCargueiro(float h) : Navio(h) {
    C = 102;
    L = 15;
}

// Petroleiro (ex: C=110, L=20)
Petroleiro::Petroleiro(float h) : Navio(h) {
    C = 110;
    L = 20;
}

// Porta-Contêiner (ex: C=95, L=18)
PortaConteiner::PortaConteiner(float h) : Navio(h) {
    C = 95;
    L = 18;
}