#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include "FigurasGeometricas.h"

using std::cout;
using std::cin;

class Cuadrado : public FigurasGeometricas{
    private:
        int lado;
    public:
        Cuadrado();
        Cuadrado(int lado);
        void dibujarFiguras();
        float calcularArea();
        float calcularPerimetro();
};

#endif