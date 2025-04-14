#include "Potencia.h"
#include <iostream>

Potencia::Potencia(double r, double i)
    : resistencia(r), corrente(i) {}

double Potencia::calcularPotencia() const {
    return resistencia * corrente * corrente;
}

void Potencia::mostrarPotencia() const {
    std::cout << "Potência dissipada: " << calcularPotencia() << " W" << std::endl;
}
