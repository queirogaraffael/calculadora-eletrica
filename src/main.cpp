#include "classebase.h"
#include "resistor.h"
#include "componentes/Capacitor.h"
#include "Potencia.h"
#include <iostream>
#include <string>
#include <fstream>
#include <locale>
using namespace std;

// Função principal
int main() {
    setlocale(LC_ALL, "PORTUGUESE");
    Resistor r1;
    Capacitor c1;

    int opcao;
    while (true) {
        cout << "CALCULADORA ELÉTRICA BÁSICA" << endl;
        cout << "1. Calcular resistência" << endl;
        cout << "2. Últimas resistências" << endl;
        cout << "3. Calcular capacitância" << endl;
        cout << "4. Últimas capacitâncias" << endl;
        cout << "7. Sair" << endl;
        cin >> opcao;

        if (opcao == 7) break;

        try {
            switch (opcao) {
                case 1:
                    r1.receberFaixas();
                    r1.mostrarResistencia();
                    r1.salvarResistencia();
                    break;
                case 3:
                    c1.receberFaixas();
                    c1.mostrarCapacitancia();
                    c1.salvarCapacitancia();
                    break;
                default:
                    cout << "Opção inválida." << endl;
            }
        } catch (const char* e) {
            cerr << e << endl;
        }
    }

    return 0;
}
