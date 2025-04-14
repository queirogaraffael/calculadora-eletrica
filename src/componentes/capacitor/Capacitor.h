#ifndef CAPACITOR_H
#define CAPACITOR_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Capacitor {
private:
    string faixa4;
    int tolerancia;
    double valor_final;

public:
    Capacitor(string f4, double valor); // Construtor
    void toleranciaC();
    void mostrarCapacitancia();
    void mostrarToleranciaC();
    void salvarCapacitancia();
};

#endif
