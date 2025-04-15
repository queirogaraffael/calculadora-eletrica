#ifndef CAPACITOR_H
#define CAPACITOR_H

#include "../ComponenteEletronico/ComponenteEletronico.h"

class Capacitor : public ComponenteEletronico {
public:
    Capacitor(const std::string& f1, const std::string& f2, const std::string& f3, const std::string& f4);
    void calcularValor() override;
    void mostrarValor() const override;
    void aplicarTolerancia() const override;
    static std::string valorComUnidade(double valor);
private:
    static void exibirValorComUnidade(double valor);
};

#endif
