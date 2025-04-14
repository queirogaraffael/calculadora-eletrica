#ifndef RESISTOR_H
#define RESISTOR_H

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class Resistor {
private:
    std::string faixa4;
    int tolerancia;
    double valor_final;

public:
    Resistor(std::string f4, double valor);
    void toleranciaR();
    void mostrarResistencia();
    void salvarResistencia();
};

#endif
