cmake_minimum_required(VERSION 3.20)
project(calculadora_eletrica)

set(CMAKE_CXX_STANDARD 20)

include_directories(
        ${CMAKE_SOURCE_DIR}/src
        ${CMAKE_SOURCE_DIR}/src/components
        ${CMAKE_SOURCE_DIR}/src/components/potencia
        ${CMAKE_SOURCE_DIR}/src/components/resistor
        ${CMAKE_SOURCE_DIR}/src/components/ComponenteEletronico
        ${CMAKE_SOURCE_DIR}/src/views
        ${CMAKE_SOURCE_DIR}/src/constantes
)

set(SOURCES
        src/main.cpp
        src/components/potencia/Potencia.cpp
        src/components/resistor/Resistor.cpp
        src/components/capacitor/Capacitor.cpp
        src/components/ComponenteEletronico/ComponenteEletronico.cpp
)

add_executable(calculadora_eletrica ${SOURCES})
