#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H

#include <iostream>

using std::cin;
using std::cout;

class FigurasGeometricas{
    protected:
        float area;
        float promedio;
    public:
        FigurasGeometricas();
        virtual void dibujarFiguras();
        virtual float calcularArea();
        virtual float calcularPerimetro();
};
#endif
