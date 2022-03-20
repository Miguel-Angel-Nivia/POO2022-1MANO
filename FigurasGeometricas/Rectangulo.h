#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include "FigurasGeometricas.h"

using std::cout;
using std::cin;

class Rectangulo : public FigurasGeometricas{
    private:
        int base, altura;
    public:
        Rectangulo();
        Rectangulo(int base, int altura);
        void dibujarFiguras();
        float calcularArea();
        float calcularPerimetro();
};

#endif
