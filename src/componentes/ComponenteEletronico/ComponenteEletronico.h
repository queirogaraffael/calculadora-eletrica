#ifndef COMPONENTE_ELETRONICO_H
#define COMPONENTE_ELETRONICO_H

#include <string>

class ComponenteEletronico {
protected:
    std::string faixa1, faixa2, faixa3, faixa4;
    double valor_final;
    double tolerancia;

public:
    ComponenteEletronico(std::string f1, std::string f2, std::string f3, std::string f4);
    virtual ~ComponenteEletronico() = default;

    virtual void calcularValor() = 0;

    void mostrarValor() const;
    void aplicarTolerancia();

    static double obterTolerancia(const std::string& cor);
    static bool toleranciaValida(const std::string& cor);
    static bool corValida(const std::string& cor);
    static int conversorCor(const std::string& cor);
};



#endif
