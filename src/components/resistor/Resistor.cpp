#include "Resistor.h"
#include <cmath>

Resistor::Resistor(const std::string& f1, const std::string& f2, const std::string& f3, const std::string& f4)
    : ComponenteEletronico(f1, f2, f3, f4) {}

void Resistor::calcularValor() {
    int valor1 = ComponenteEletronico::conversorCor(faixa1);
    int valor2 = ComponenteEletronico::conversorCor(faixa2);
    int multiplicador = ComponenteEletronico::conversorCor(faixa3);

    valor_final = (valor1 * 10 + valor2) * std::pow(10, multiplicador);
    aplicarTolerancia();
}
