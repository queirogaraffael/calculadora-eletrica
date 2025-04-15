#ifndef CALCULADORA_ELETRONICA_H
#define CALCULADORA_ELETRONICA_H

#include <string>

class CalculadoraEletronica {
public:
    static void calcularPotenciaDissipada();
    static void calcularResistencia();
    static void calcularCapacitancia();
    static void exibirResultadosSalvos();
};

void salvarResultado(const std::string& resultado);

#endif
