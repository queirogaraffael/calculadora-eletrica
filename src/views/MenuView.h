#ifndef MENU_VIEW_H
#define MENU_VIEW_H

#include <iostream>
#include "../constantes/OpcoesMenu.h"

using namespace std;

inline void exibirMenu() {
    cout << "=========== CALCULADORA ELÉTRICA BÁSICA ===========" << endl << endl;
    cout << " " << CALCULAR_RESISTENCIA   << " - Calcular resistência"        << endl;
    cout << " " << CALCULAR_CAPACITANCIA  << " - Calcular capacitância"       << endl;
    cout << " " << POTENCIA_DISSIPADA     << " - Calcular potência dissipada" << endl;
    cout << " " << RESULTADOS_SALVOS      << " - Ver resultados salvos"       << endl;
    cout << " " << MANUAL_USO             << " - Manual de uso"               << endl;
    cout << " " << SAIR                   << " - Sair do programa"            << endl;
    cout << "===================================================" << endl;
    cout << "Digite uma opção: ";
}

#endif
