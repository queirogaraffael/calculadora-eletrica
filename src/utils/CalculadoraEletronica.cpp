#include "CalculadoraEletronica.h"
#include <iostream>
#include <stdexcept>
#include <windows.h>
#include "../components/potencia/Potencia.h"
#include "../components/resistor/Resistor.h"

using namespace std;

void CalculadoraEletronica::calcularPotenciaDissipada() {
    double resistencia, corrente;

    cout << "Digite o valor da resistência (Ohms): ";
    cin >> resistencia;

    cout << "Digite o valor da corrente (Amperes): ";
    cin >> corrente;

    try {
        if (resistencia < 0 || corrente < 0) {
            throw invalid_argument("Resistência e corrente devem ser valores positivos.");
        }

        Potencia p(resistencia, corrente);
        p.mostrarPotencia();
    } catch (const exception& e) {
        cerr << "Erro ao calcular potência: " << e.what() << endl;
    }
}

void CalculadoraEletronica::calcularResistencia() {
    string faixa1, faixa2, faixa3, faixa4;

    cout << "Digite a cor da primeira faixa: ";
    cin >> faixa1;
    cout << "Digite a cor da segunda faixa: ";
    cin >> faixa2;
    cout << "Digite a cor da terceira faixa (multiplicador): ";
    cin >> faixa3;
    cout << "Digite a cor da quarta faixa (tolerância): ";
    cin >> faixa4;

    try {
        Resistor resistor(faixa1, faixa2, faixa3, faixa4);
        resistor.calcularValor();
        resistor.mostrarValor();
    } catch (const invalid_argument& e) {
        cerr << "Erro ao calcular resistência: " << e.what() << endl;
    }

    system("pause");
}
