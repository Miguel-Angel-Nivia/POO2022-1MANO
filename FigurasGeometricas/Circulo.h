#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <cmath>
#include "FigurasGeometricas.h"

using std::cout;
using std::cin;

class Circulo : public FigurasGeometricas{
    private:
        float radio;
    public:
        Circulo();
        Circulo(float radio);
        void dibujarFiguras();
        float calcularArea();
        float calcularPerimetro();
};

#endif
