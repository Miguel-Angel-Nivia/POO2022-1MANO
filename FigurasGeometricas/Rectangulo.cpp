#include <iostream>
#include "Rectangulo.h"

Rectangulo::Rectangulo(){

}

Rectangulo::Rectangulo(int base, int altura){
    this -> base = base;
    this -> altura = altura;
}

void Rectangulo::dibujarFiguras(){
    for(int i = 0; i < altura; i++) {
        for (int j = 0; j < base; j++){
            cout << " * ";
        }
        cout << "\n";
    }
}

float Rectangulo::calcularArea(){
    float area;
    area = base * altura;
    return area;
}

float Rectangulo::calcularPerimetro(){
    float perimetro;
    perimetro = (base * 2) + (altura * 2);
    return perimetro;
}