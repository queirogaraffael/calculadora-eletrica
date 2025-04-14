#include "Resistor.h"

Resistor::Resistor() {
    faixa4 = "";
    valor_final = 0;
    tolerancia = 0;
}

Resistor::Resistor(std::string f4, double valor) {
    faixa4 = f4;
    valor_final = valor;
    tolerancia = 0;
}

void Resistor::toleranciaR() {
    static std::map<std::string, int> tolerancias = {
        {"prata", 10}, {"ouro", 5}, {"marrom", 1},
        {"vermelho", 2}, {"incolor", 20}};

    tolerancia = tolerancias[faixa4];
}

void Resistor::mostrarResistencia() {
    std::cout << "Resistência final: " << valor_final << " ohms" << std::endl;
}

void Resistor::salvarResistencia() {
    std::ofstream arquivoR("UltimasResistencias.txt", std::ios::app);
    arquivoR << valor_final << " ohms" << std::endl;
    arquivoR.close();
}
