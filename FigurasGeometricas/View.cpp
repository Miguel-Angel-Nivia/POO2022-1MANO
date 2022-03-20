#include "View.h"

View::View(){

}

void View::agregarFigura(int x, float y, int z, int w){
    if( x == 1 ){
        figurasGeometricas.push_back(new Circulo( y ));
        cout << "Circulo Creado\n";
    }
    else if( x == 2 ){
        figurasGeometricas.push_back(new Cuadrado( z ));
        cout << "Cuadrado Creado\n";
    }
    else if( x == 3 ){
        figurasGeometricas.push_back(new Rectangulo( z, w));
        cout << "Rectangulo Creado\n";
    }
}

void View::dibujarFiguras(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFiguras();
        cout << "\n\n";
    }
}

void View::mostrarAreas(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFiguras();
        cout << "Area: " << figurasGeometricas[i]->calcularArea() << "\n\n";
    }
}

void View::mostrarPerimetros(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFiguras();
        cout << figurasGeometricas[i]->calcularPerimetro() << "\n\n";
    }
}

float View::sumarTodasLasAreas(){
    float suma;
    for (int i=0; i<figurasGeometricas.size(); i++){
        suma += figurasGeometricas[i]->calcularArea();
    }
    return suma;
}

