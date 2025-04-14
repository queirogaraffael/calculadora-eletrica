#include <iostream>
#include <locale>
#include <stdexcept>
#include <windows.h>
#include "constantes/OpcoesMenu.h"
#include "views/MenuView.h"
#include "views/ManualView.h"

using namespace std;

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
                    // lógica para calcular resistência
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
