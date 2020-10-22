#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <string.h>
#include "include/Rectangulo.h"

using namespace std;

void crearRectangulo(Rectangulo &rectangulo){
    rectangulo.base = 1;
    rectangulo.altura = 1;
}

void setBase(Rectangulo &rectangulo, float dato){
    rectangulo.base = dato;
}

void setAltura(Rectangulo &rectangulo, float dato){
    rectangulo.altura = dato;
}

void setColorRectangulo(Rectangulo &rectangulo, string dato){
    rectangulo.color = dato;
}

float getBase(Rectangulo &rectangulo){
    return rectangulo.base;
}

float getAltura(Rectangulo &rectangulo){
    return rectangulo.altura;
}

string getColorRectangulo(Rectangulo &rectangulo){
    return rectangulo.color;
}

float areaRectangulo(Rectangulo &rectangulo){
    float base = rectangulo.base;
    float altura = rectangulo.altura;
    return base*altura;
}

void borrarRectangulo(Rectangulo &rectangulo){
    delete &rectangulo;
    rectangulo.color = "";
}
