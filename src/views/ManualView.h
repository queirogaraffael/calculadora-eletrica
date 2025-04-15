#ifndef MANUAL_VIEW_H
#define MANUAL_VIEW_H

#include <iostream>
#include <cstdlib> // para system

using namespace std;

inline void mostrarManual() {
    cout << "\n========== MANUAL DE USO ==========" << endl;
    cout << "Bem-vindo ao Manual de Instruções da Calculadora Eletrica!" << endl << endl;
    cout << "Aqui estão algumas orientações para usar o programa:" << endl;
    cout << "1 - Ao inserir as cores para os componentes, você pode digitar os nomes das cores em qualquer formato (maiúsculas ou minúsculas)." << endl;
    cout << "2 - Ao calcular a resistência, a unidade utilizada será ohms (Ω)." << endl;
    cout << "3 - Ao calcular a capacitância, a unidade utilizada será picofarads (pF)." << endl;
    cout << "4 - Ao calcular a potência dissipada, a unidade utilizada será watts (W)." << endl;
    cout << "5 - Em caso de erro, o programa exibirá uma mensagem detalhada sobre o problema e orientações para corrigir." << endl;
    cout << "6 - Caso você queira salvar os resultados, o programa irá perguntar antes de concluir o cálculo." << endl;
    cout << "7 - O programa permite consultar os últimos resultados calculados a qualquer momento." << endl;
    cout << endl;
    cout << "====================================" << endl;
    cout << "Por favor, siga as instruções corretamente para um melhor uso da calculadora." << endl;
    system("pause");
}

#endif
