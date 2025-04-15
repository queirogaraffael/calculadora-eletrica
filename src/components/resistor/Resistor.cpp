#include "Resistor.h"
#include <cmath>
#include <iostream>
#include <iomanip>

Resistor::Resistor(const std::string& f1, const std::string& f2, const std::string& f3, const std::string& f4)
    : ComponenteEletronico(f1, f2, f3, f4) {}

void Resistor::calcularValor() {
    int valor1 = ComponenteEletronico::conversorCor(faixa1);
    int valor2 = ComponenteEletronico::conversorCor(faixa2);
    int multiplicador = ComponenteEletronico::conversorCor(faixa3);

    valor_final = (valor1 * 10 + valor2) * std::pow(10, multiplicador);
}

void Resistor::mostrarValor() const {
    std::cout << "Valor final: ";
    exibirValorComUnidade(valor_final);

    std::cout << "Com tolerância de: " << std::fixed << std::setprecision(1) << tolerancia << "%" << std::endl;

    aplicarTolerancia();
}

void Resistor::aplicarTolerancia() const {
    double valorMinimo = valor_final * (1 - tolerancia / 100.0);
    double valorMaximo = valor_final * (1 + tolerancia / 100.0);

    std::cout << "Valor mínimo (com tolerância): ";
    exibirValorComUnidade(valorMinimo);

    std::cout << "Valor máximo (com tolerância): ";
    exibirValorComUnidade(valorMaximo);
}

void Resistor::exibirValorComUnidade(double valor) {
    std::cout << std::fixed;

    if (valor < 1e-3) {
        std::cout << std::setprecision(3) << valor * 1e3 << " mΩ" << std::endl;
    } else if (valor < 1) {
        std::cout << std::setprecision(6) << valor * 1e6 << " µΩ" << std::endl;
    } else if (valor < 1e3) {
        std::cout << std::setprecision(2) << valor << " Ω" << std::endl;
    } else if (valor < 1e6) {
        std::cout << std::setprecision(2) << valor / 1e3 << " kΩ" << std::endl;
    } else {
        std::cout << std::setprecision(2) << valor / 1e6 << " MΩ" << std::endl;
    }
}

std::string Resistor::valorComUnidade(double valor) {
    std::ostringstream oss;
    oss << std::fixed;

    if (valor < 1e-3) {
        oss << std::setprecision(3) << valor * 1e3 << " mΩ";
    } else if (valor < 1) {
        oss << std::setprecision(6) << valor * 1e6 << " µΩ";
    } else if (valor < 1e3) {
        oss << std::setprecision(2) << valor << " Ω";
    } else if (valor < 1e6) {
        oss << std::setprecision(2) << valor / 1e3 << " kΩ";
    } else {
        oss << std::setprecision(2) << valor / 1e6 << " MΩ";
    }

    return oss.str();
}
