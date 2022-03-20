#include <iostream>
#include "Circulo.h"

Circulo::Circulo(){

}

Circulo::Circulo(float radio){
    this -> radio = radio;
}

void Circulo::dibujarFiguras(){
    for (int j = 0; j <= radio * 2; ++j) {
        for (int i = 0; i <= radio * 2; ++i) {
            if(pow(i - radio, 2.0) + pow(j - radio, 2.0) <= pow(radio, 2.0)){
                cout << " * ";
            }
            else{
                cout << "   ";
            }
        }
        cout << "\n";
    }
}

float Circulo::calcularArea(){
    float area;
    area = 3.1416 * (radio * radio);
    return area;
}

float Circulo::calcularPerimetro(){
    float perimetro;
    perimetro = (2 * 3.14) * radio;
    return perimetro;
}
