#include <iostream>
#include <locale>
#include <stdexcept>
#include <windows.h>
#include "constantes/OpcoesMenu.h"
#include "views/MenuView.h"
#include "views/ManualView.h"
#include "components/ComponenteEletronico/ComponenteEletronico.h"
#include "utils/CalculadoraEletronica.h"

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
                        CalculadoraEletronica::calcularResistencia();
                        break;

                case CALCULAR_CAPACITANCIA:
                    CalculadoraEletronica::calcularCapacitancia();
                        break;

                case POTENCIA_DISSIPADA:
                    CalculadoraEletronica::calcularPotenciaDissipada();
                        break;

                case RESULTADOS_SALVOS:
                    CalculadoraEletronica::exibirResultadosSalvos();
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