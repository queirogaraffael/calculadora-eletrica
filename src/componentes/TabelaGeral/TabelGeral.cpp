#include "TabelaGeral.h"

TabelaGeral::TabelaGeral() :
    faixa1("VAZIO"), faixa2("VAZIO"), faixa3("VAZIO"), faixa4("VAZIO"),
    faixa12(0), valor_faixa1(0), valor_faixa2(0), valor_faixa3(0),
    valor_final(0), tolerancia(0) {}

void TabelaGeral::receberFaixas() {
    cout << "Cor da primeira faixa: " << endl;
    cin >> faixa1;
    cout << "Cor da segunda faixa: " << endl;
    cin >> faixa2;
    cout << "Cor da terceira faixa: " << endl;
    cin >> faixa3;
    cout << "Cor da quarta faixa: " << endl;
    cin >> faixa4;

    if (!corValida(faixa1))
        throw "Primeira faixa inválida.";
    if (!corValida(faixa2))
        throw "Segunda faixa inválida.";
    if (!corValida(faixa3))
        throw "Terceira faixa inválida.";
    if (!corValida(faixa4))
        throw "Quarta faixa inválida.";

    DeterminaValores(faixa1, faixa2, faixa3);
}

void TabelaGeral::juntarfaixas_multiplicar(int f1, int f2, int f3) {
    faixa12 = f1 * 10 + f2;
    valor_final = faixa12 * f3;
}

void TabelaGeral::DeterminaValores(string cor1, string cor2, string cor3) {
    valor_faixa1 = ConversorFaixasEmComum12(cor1);
    valor_faixa2 = ConversorFaixasEmComum12(cor2);
    valor_faixa3 = ConversorFaixa3(cor3);
    juntarfaixas_multiplicar(valor_faixa1, valor_faixa2, valor_faixa3);
}

int TabelaGeral::ConversorFaixasEmComum12(string cor) {
    static map<string, int> mapa_cores = {
        {"preto", 0}, {"marrom", 1}, {"vermelho", 2}, {"laranja", 3},
        {"amarelo", 4}, {"verde", 5}, {"azul", 6}, {"violeta", 7},
        {"cinza", 8}, {"branco", 9}};

    return mapa_cores[cor];
}

int TabelaGeral::ConversorFaixa3(string cor) {
    static map<string, int> multiplicadores = {
        {"preto", 1}, {"marrom", 10}, {"vermelho", 100}, {"laranja", 1000},
        {"amarelo", 10000}, {"verde", 100000}, {"azul", 1000000},
        {"violeta", 10000000}, {"cinza", 100000000}, {"branco", 1000000000}};

    return multiplicadores[cor];
}

bool TabelaGeral::corValida(string cor) {
    static set<string> cores_validas = {
        "preto", "marrom", "vermelho", "laranja", "amarelo",
        "verde", "azul", "violeta", "cinza", "branco"};

    return cores_validas.count(cor) > 0;
}
