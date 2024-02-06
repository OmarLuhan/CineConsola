#pragma once
#include <iostream>
using namespace std;
#ifndef VALIDACIONES_H
#define VALIDACIONES_H
class Validaciones {
public:
    bool ValidarSoloLetras(string);
    char ValidarOpcion(char);
    char ValidarOpcion5(char);
    char ValidarOpcion3(char);
    bool esNumero(string);
    int ValidarNumero(string);
    bool ValidarRango(int, int,int);
};
#endif
