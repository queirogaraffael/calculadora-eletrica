cmake_minimum_required(VERSION 3.30)
project(calculadora_eletrica)

set(CMAKE_CXX_STANDARD 20)

add_executable(calculadora_eletrica src/main.cpp
        src/components/resistor/Resistor.cpp
        src/components/resistor/Resistor.h
        src/components/capacitor/Capacitor.cpp
        src/components/capacitor/Capacitor.h
        src/components/potencia/Potencia.cpp
        src/components/potencia/Potencia.h
        src/components/componenteEletronico/ComponenteEletronico.cpp
        src/components/componenteEletronico/ComponenteEletronico.h
        src/constantes/OpcoesMenu.h
        src/views/ManualView.h
        src/views/MenuView.h)
