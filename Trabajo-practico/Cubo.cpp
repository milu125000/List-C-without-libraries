#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/Cubo.h"

using namespace std;

Cubo crearCubo(float Lado, string color){
    Cubo c;
    c.Lado= Lado;
    c.color= color;

    return c;
}

void setLado(Cubo &cubo, float dato){
    cubo.Lado = dato;
}

void setColorCubo(Cubo &cubo, string dato){
    cubo.color = dato;
}

float getLado(Cubo &cubo){
    return cubo.Lado;
}

string getColorCubo(Cubo &cubo){
    return cubo.color;
}

float areaCubo(Cubo &cubo){
    float lado= cubo.Lado;
    return 6*(lado*lado);
}

void borrarCubo(Cubo &cubo){
    delete &cubo;
    cubo.color = "";
}
