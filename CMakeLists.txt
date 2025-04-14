cmake_minimum_required(VERSION 3.30)
project(calculadora_eletrica)

set(CMAKE_CXX_STANDARD 20)

add_executable(calculadora_eletrica src/main.cpp
        src/componentes/potencia/Potencia.cpp
        src/constantes/OpcoesMenu.h
        src/views/MenuView.h
        src/views/ManualView.h
        src/componentes/ComponenteEletronico/ComponenteEletronico.cpp
        src/componentes/ComponenteEletronico/ComponenteEletronico.h
        src/componentes/resistor/Resistor.cpp
        src/componentes/resistor/Resistor.h
        src/componentes/capacitor/Capacitor.cpp
        src/componentes/capacitor/Capacitor.h)
