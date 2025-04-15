#ifndef POTENCIA_H
#define POTENCIA_H

class Potencia {
private:
    double resistencia;
    double corrente;

public:
    Potencia(double r, double i);

    double calcularPotencia() const;
    void mostrarPotencia() const;
    double getPotencia() const;
};

#endif
