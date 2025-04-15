#include <iostream>
#include <locale>
#include <stdexcept>
#include <windows.h>
#include "constantes/OpcoesMenu.h"
#include "views/MenuView.h"
#include "views/ManualView.h"
#include "components/potencia/Potencia.h"
#include "components/resistor/Resistor.h"
#include "components/ComponenteEletronico/ComponenteEletronico.h"

using namespace std;

void calcularPotenciaDissipada() {
    double resistencia, corrente;

    std::cout << "Digite o valor da resistência (Ohms): ";
    std::cin >> resistencia;

    std::cout << "Digite o valor da corrente (Amperes): ";
    std::cin >> corrente;

    try {
        if (resistencia < 0 || corrente < 0) {
            throw std::invalid_argument("Resistência e corrente devem ser valores positivos.");
        }

        Potencia p(resistencia, corrente);
        p.mostrarPotencia();
    } catch (const std::exception& e) {
        std::cerr << "Erro ao calcular potência: " << e.what() << std::endl;
    }
}

void calcularResistencia() {
    std::string faixa1, faixa2, faixa3, faixa4;

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


int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt_BR.utf8");

    int opcao = 0;

    while (opcao != SAIR) {
        system("cls");
        exibirMenu();
        cin >> opcao;

        try {
            switch (opcao) {
                case CALCULAR_RESISTENCIA:
                        calcularResistencia();
                        break;

                case ULTIMAS_RESISTENCIAS:
                    // lógica para mostrar resistências
                        break;

                case CALCULAR_CAPACITANCIA:
                    // lógica para calcular capacitância
                        break;

                case ULTIMAS_CAPACITANCIAS:
                    // lógica para mostrar capacitâncias
                        break;

                case POTENCIA_DISSIPADA:
                    calcularPotenciaDissipada();
                    // lógica para potência
                        break;

                case MANUAL_USO:
                    mostrarManual();
                break;

                case SAIR:
                    cout << "Saindo do programa..." << endl;
                break;

                default:
                    throw invalid_argument("Opção inválida! Escolha uma opção válida.");
            }
        } catch (const invalid_argument& e) {
            cerr << "Erro: " << e.what() << endl;
            system("pause");
        }
    }

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.