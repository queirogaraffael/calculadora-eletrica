#include "ComponenteEletronico.h"
#include <iostream>
#include <stdexcept>

ComponenteEletronico::ComponenteEletronico(std::string f1, std::string f2, std::string f3, std::string f4)
    : faixa1(std::move(f1)), faixa2(std::move(f2)), faixa3(std::move(f3)), faixa4(std::move(f4)), valor_final(0.0) {

    if (!corValida(faixa1) || !corValida(faixa2) || !corValida(faixa3) || !toleranciaValida(faixa4)) {
        throw std::invalid_argument("Cor inválida em uma das faixas.");
    }

    tolerancia = obterTolerancia(faixa4);
}

void ComponenteEletronico::mostrarValor() const {
    std::cout << "Valor final: " << valor_final << " (com tolerância de " << tolerancia << "%)" << std::endl;
}

void ComponenteEletronico::aplicarTolerancia() {
    valor_final *= (1 + tolerancia / 100.0);
}

double ComponenteEletronico::obterTolerancia(const std::string& cor) {
    if (cor == "marrom") return 1.0;
    if (cor == "vermelho") return 2.0;
    if (cor == "verde") return 0.5;
    if (cor == "azul") return 0.25;
    if (cor == "violeta") return 0.1;
    if (cor == "cinza") return 0.05;
    if (cor == "dourado") return 5.0;
    if (cor == "prata") return 10.0;

    throw std::invalid_argument("Cor inválida para tolerância.");
}

bool ComponenteEletronico::toleranciaValida(const std::string& cor) {
    return cor == "marrom" || cor == "vermelho" || cor == "verde" || cor == "azul" ||
           cor == "violeta" || cor == "cinza" || cor == "dourado" || cor == "prata";
}

bool ComponenteEletronico::corValida(const std::string& cor) {
    return cor == "preto" || cor == "marrom" || cor == "vermelho" || cor == "laranja" ||
           cor == "amarelo" || cor == "verde" || cor == "azul" || cor == "violeta" ||
           cor == "cinza" || cor == "branco";
}

int ComponenteEletronico::conversorCor(const std::string& cor) {
    if (cor == "preto") return 0;
    if (cor == "marrom") return 1;
    if (cor == "vermelho") return 2;
    if (cor == "laranja") return 3;
    if (cor == "amarelo") return 4;
    if (cor == "verde") return 5;
    if (cor == "azul") return 6;
    if (cor == "violeta") return 7;
    if (cor == "cinza") return 8;
    if (cor == "branco") return 9;

    throw std::invalid_argument("Cor inválida");
}
