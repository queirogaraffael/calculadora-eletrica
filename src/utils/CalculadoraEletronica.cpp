#include "CalculadoraEletronica.h"
#include <iostream>
#include <stdexcept>
#include <windows.h>
#include <fstream>
#include "../components/potencia/Potencia.h"
#include "../components/resistor/Resistor.h"
#include "../components/capacitor/Capacitor.h"

using namespace std;

void salvarResultado(const string& resultado) {
    ofstream arquivo("resultados.txt", ios::app);
    if (arquivo.is_open()) {
        arquivo << resultado << endl;
        arquivo.close();
    } else {
        cerr << "Erro ao salvar o resultado." << endl;
    }
}

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

        char opcao;
        cout << "Deseja salvar este resultado? (s/n): ";
        cin >> opcao;
        if (opcao == 's' || opcao == 'S') {
            salvarResultado("Potência dissipada: " + to_string(p.getPotencia()) + " W");
        }

    } catch (const exception& e) {
        cerr << "Erro ao calcular potência: " << e.what() << endl;
    }

    system("pause");
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

        char opcao;
        cout << "Deseja salvar este resultado? (s/n): ";
        cin >> opcao;
        if (opcao == 's' || opcao == 'S') {
            salvarResultado("Resistência calculada: " + to_string(resistor.getValor()) + " Ohms");
        }

    } catch (const invalid_argument& e) {
        cerr << "Erro ao calcular resistência: " << e.what() << endl;
    }

    system("pause");
}

void CalculadoraEletronica::calcularCapacitancia() {
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
        Capacitor capacitor(faixa1, faixa2, faixa3, faixa4);
        capacitor.calcularValor();
        capacitor.mostrarValor();

        char opcao;
        cout << "Deseja salvar este resultado? (s/n): ";
        cin >> opcao;
        if (opcao == 's' || opcao == 'S') {
            salvarResultado("Capacitância calculada: " + to_string(capacitor.getValor()) + " F");
        }

    } catch (const invalid_argument& e) {
        cerr << "Erro ao calcular capacitância: " << e.what() << endl;
    }

    system("pause");
}

void CalculadoraEletronica::exibirResultadosSalvos() {
    ifstream arquivo("resultados.txt");

    if (!arquivo.is_open()) {
        cerr << "Nenhum resultado salvo encontrado." << endl;
        system("pause");
        return;
    }

    string linha;
    cout << "\n=== Resultados Salvos ===\n";
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }

    arquivo.close();
    system("pause");
}
