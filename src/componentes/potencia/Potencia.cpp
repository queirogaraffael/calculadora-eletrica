#ifndef POTENCIA_H
#define POTENCIA_H

#include <iostream>

class Potencia {
private:
    double resistencia;
    double corrente;

public:
    Potencia(double r, double i)
        : resistencia(r), corrente(i) {}

    double calcularPotencia() const {
        return resistencia * corrente * corrente;
    }

    void mostrarPotencia() const {
        std::cout << "Potência dissipada: " << calcularPotencia() << " W" << std::endl;
    }
};

#endif