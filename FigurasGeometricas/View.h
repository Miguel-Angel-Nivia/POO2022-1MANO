#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <vector>
#include "FigurasGeometricas.h"

#include "Circulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"

using namespace std;
using std::cout;
using std::cin;
using std::vector;

class View{
    private:
        vector<FigurasGeometricas*>figurasGeometricas;
    public:
        View();
        void agregarFigura(int x, float y, int z, int w);
        virtual void dibujarFiguras();
        void mostrarAreas();
        void mostrarPerimetros();
        float sumarTodasLasAreas();
};
#endif
