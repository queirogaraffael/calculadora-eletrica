#ifndef MENU_VIEW_H
#define MENU_VIEW_H

#include <iostream>
#include "../constantes/OpcoesMenu.h"

using namespace std;

inline void exibirMenu() {
    cout << "=========== CALCULADORA ELÉTRICA BÁSICA ===========" << endl << endl;
    cout << " " << CALCULAR_RESISTENCIA      << " - Calcular resistência"        << endl;
    cout << " " << ULTIMAS_RESISTENCIAS      << " - Últimas resistências"        << endl;
    cout << " " << CALCULAR_CAPACITANCIA     << " - Calcular capacitância"       << endl;
    cout << " " << ULTIMAS_CAPACITANCIAS     << " - Últimas capacitâncias"       << endl;
    cout << " " << POTENCIA_DISSIPADA        << " - Potência dissipada"          << endl;
    cout << " " << MANUAL_USO                << " - Manual de uso"               << endl;
    cout << " " << SAIR                      << " - Sair do programa"            << endl;
    cout << "===================================================" << endl;
    cout << "Digite uma opção: ";
}

#endif
