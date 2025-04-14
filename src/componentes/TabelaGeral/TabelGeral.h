#ifndef TABELAGERAL_H
#define TABELAGERAL_H

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <stdexcept>  // Para exceções

using namespace std;

class TabelaGeral {
private:
    string faixa1, faixa2, faixa3, faixa4;
    int faixa12, valor_faixa1, valor_faixa2, valor_faixa3;
    double valor_final;
    int tolerancia;

public:
    TabelaGeral();  // Construtor

    void receberFaixas();
    void juntarfaixas_multiplicar(int f1, int f2, int f3);
    void DeterminaValores(string cor1, string cor2, string cor3);
    int ConversorFaixasEmComum12(string cor);
    int ConversorFaixa3(string cor);
    bool corValida(string cor);
};

#endif
