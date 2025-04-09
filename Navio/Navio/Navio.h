#pragma once
#ifndef NAVIO_H
#define NAVIO_H

#include <string>
using namespace std;

class Navio {
protected:
    float C; // Coeficiente de carga
    float L; // Coeficiente de comprimento
    float h; // Distância entre linha d'água atual e a de projeto (em cm)

public:
    Navio(float h);
    virtual ~Navio() = default;

    virtual float calcularCapacidade() const;
    virtual string determinarConceito() const;

    void setH(float h);
    float getH() const;
};

class NavioCargueiro : public Navio {
public:
    NavioCargueiro(float h);
};

class Petroleiro : public Navio {
public:
    Petroleiro(float h);
};

class PortaConteiner : public Navio {
public:
    PortaConteiner(float h);
};

#endif
