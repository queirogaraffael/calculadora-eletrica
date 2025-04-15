#include "Capacitor.h"
#include <cmath>
#include <iostream>

Capacitor::Capacitor(const std::string& f1, const std::string& f2, const std::string& f3, const std::string& f4)
    : ComponenteEletronico(f1, f2, f3, f4) {}

void Capacitor::calcularValor() {
    int valor1 = ComponenteEletronico::conversorCor(faixa1);
    int valor2 = ComponenteEletronico::conversorCor(faixa2);
    int multiplicador = ComponenteEletronico::conversorCor(faixa3);

    double valorEmPf = (valor1 * 10 + valor2) * std::pow(10, multiplicador);

    valor_final = valorEmPf * 1e-12;
}


void Capacitor::mostrarValor() const {
    std::cout << "Valor final: ";
    exibirValorComUnidade(valor_final);

    std::cout << "Com tolerância de: " << tolerancia << "%" << std::endl;

    aplicarTolerancia();
}

void Capacitor::aplicarTolerancia() const {
    double valorMinimo = valor_final * (1 - tolerancia / 100.0);
    double valorMaximo = valor_final * (1 + tolerancia / 100.0);

    std::cout << "Valor mínimo (com tolerância): ";
    exibirValorComUnidade(valorMinimo);

    std::cout << "Valor máximo (com tolerância): ";
    exibirValorComUnidade(valorMaximo);
}

void Capacitor::exibirValorComUnidade(double valor) {
    if (valor < 1e-12) {
        std::cout << valor * 1e12 << " pF" << std::endl;
    } else if (valor < 1e-9) {
        std::cout << valor * 1e9 << " nF" << std::endl;
    } else if (valor < 1e-6) {
        std::cout << valor * 1e6 << " µF" << std::endl;
    } else {
        std::cout << valor << " F" << std::endl;
    }
}


