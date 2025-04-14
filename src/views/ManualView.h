#ifndef MANUAL_VIEW_H
#define MANUAL_VIEW_H

#include <iostream>
#include <cstdlib> // para system

using namespace std;

inline void mostrarManual() {
    cout << "\n========== MANUAL DE USO ==========" << endl;
    cout << "1 - As letras devem estar APENAS em maiúsculas ou APENAS em minúsculas." << endl;
    cout << "2 - A resistência é em ohms." << endl;
    cout << "3 - A capacitância é em picofarads." << endl;
    cout << "4 - A potência dissipada é em Watts." << endl;
    cout << "====================================" << endl;
    system("pause");
}

#endif
