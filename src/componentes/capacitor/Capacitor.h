#ifndef CAPACITOR_H
#define CAPACITOR_H

#include "../ComponenteEletronico/ComponenteEletronico.h"

class Capacitor : public ComponenteEletronico {
public:
    Capacitor(const std::string& f1, const std::string& f2, const std::string& f3, const std::string& f4)
        : ComponenteEletronico(f1, f2, f3, f4) {}

    void calcularValor() override;
};

#endif
