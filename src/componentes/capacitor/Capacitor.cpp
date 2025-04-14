#include "Capacitor.h"

Capacitor::Capacitor() {
    faixa4 = "";
    valor_final = 0;
    tolerancia = 0;
}

Capacitor::Capacitor(string f4, double valor) {
    faixa4 = f4;
    valor_final = valor;
    tolerancia = 0;
}

void Capacitor::toleranciaC() {
    if (faixa4 == "preto") tolerancia = 20;
    else if (faixa4 == "branco") tolerancia = 10;
}

void Capacitor::mostrarCapacitancia() {
    cout << "Capacitância final: " << valor_final << " picofarads" << endl;
}

void Capacitor::mostrarToleranciaC() {
    toleranciaC();
    cout << "Tolerância: ± " << tolerancia << " %" << endl;
}

void Capacitor::salvarCapacitancia() {
    ofstream arquivoC("UltimasCapacitancias.txt", ios::app);
    arquivoC << valor_final << " picofarads" << endl;
    arquivoC.close();
}
