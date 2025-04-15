#include "Capacitor.h"
#include <cmath>
#include <iostream>
#include <iomanip>

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

    std::cout << "Com tolerância de: " << std::fixed << std::setprecision(1) << tolerancia << "%" << std::endl;

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
        std::cout << std::fixed << std::setprecision(12) << valor * 1e12 << " pF" << std::endl;
    } else if (valor < 1e-9) {
        std::cout << std::fixed << std::setprecision(9) << valor * 1e9 << " nF" << std::endl;
    } else if (valor < 1e-6) {
        std::cout << std::fixed << std::setprecision(6) << valor * 1e6 << " µF" << std::endl;
    } else {
        std::cout << std::fixed << std::setprecision(6) << valor << " F" << std::endl;
    }
}

std::string Capacitor::valorComUnidade(double valor) {
    std::ostringstream oss;

    if (valor < 1e-12) {
        oss << std::fixed << std::setprecision(12) << valor * 1e12 << " pF";
    } else if (valor < 1e-9) {
        oss << std::fixed << std::setprecision(9) << valor * 1e9 << " nF";
    } else if (valor < 1e-6) {
        oss << std::fixed << std::setprecision(6) << valor * 1e6 << " µF";
    } else {
        oss << std::fixed << std::setprecision(6) << valor << " F";
    }

    return oss.str();
}