#ifndef POTENCIA_H
#define POTENCIA_H

#include <iostream>

class Potencia {
private:
    double resistencia;
    double corrente;

public:
    Potencia(double r, double i);

    double calcularPotencia() const;

    void mostrarPotencia() const;
};

#endif
