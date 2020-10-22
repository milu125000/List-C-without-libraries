#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/triangulo.h"

using namespace std;

void setCatetoMenor(Triangulo &triangulo, float dato){
    triangulo.catetoMenor = dato;
}

void setCatetoMayor(Triangulo &triangulo, float dato){
    triangulo.catetoMayor = dato;
}

void setColorTriangulo(Triangulo &triangulo, string dato){
    triangulo.color = dato;
}

float getCatetoMenor(Triangulo &triangulo){
    return triangulo.catetoMenor;
}

float getCatetoMayor(Triangulo &triangulo){
    return triangulo.catetoMayor;
}

string getColorTriangulo(Triangulo &triangulo){
    return triangulo.color;
}

float areaTriangulo(Triangulo &triangulo){
    float base = triangulo.catetoMenor;
    float altura = triangulo.catetoMayor;
    return base*altura/2;
}

void borrarTriangulo(Triangulo &triangulo){
    delete &triangulo;
    triangulo.color = "";
}