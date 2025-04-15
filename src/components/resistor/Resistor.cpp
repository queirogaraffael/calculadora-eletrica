#include "Resistor.h"
#include <cmath>
#include <iostream>

Resistor::Resistor(const std::string& f1, const std::string& f2, const std::string& f3, const std::string& f4)
    : ComponenteEletronico(f1, f2, f3, f4) {}

void Resistor::calcularValor() {
    int valor1 = ComponenteEletronico::conversorCor(faixa1);
    int valor2 = ComponenteEletronico::conversorCor(faixa2);
    int multiplicador = ComponenteEletronico::conversorCor(faixa3);

    valor_final = (valor1 * 10 + valor2) * std::pow(10, multiplicador);
}

void Resistor::mostrarValor() const {
    std::cout << "Valor final: " << valor_final << std::endl;
    std::cout << "Com tolerância de: " << tolerancia << "%" << std::endl;

    aplicarTolerancia();
}

void Resistor::aplicarTolerancia() const {
    double valorMinimo = valor_final * (1 - tolerancia / 100.0);
    double valorMaximo = valor_final * (1 + tolerancia / 100.0);

    std::cout << "Valor mínimo (com tolerância): " << valorMinimo << " ohms" << std::endl;
    std::cout << "Valor máximo (com tolerância): " << valorMaximo << " ohms" << std::endl;
}
