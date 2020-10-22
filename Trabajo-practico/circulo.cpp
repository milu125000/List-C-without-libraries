#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/circulo.h"
# define PI_N          3.141592653589793238462643383279502884

using namespace std;

void crearCirculo(Circulo &circulo){
    circulo.radio = 1;
}

void setRadioCirculo(Circulo &circulo, float dato){
    circulo.radio = dato;
}


void setColorCirculo(Circulo &circulo, string dato){
    circulo.color = dato;
}


float getRadioCirculo(Circulo &circulo){
    return circulo.radio;
}

string getColorCirculo(Circulo &circulo){
    return circulo.color;
}

float areaCirculo(Circulo &circulo){
    float radio = circulo.radio;
    return radio * radio * PI_N;
}

void borrarCirculo(Circulo &circulo){
    delete &circulo;
    circulo.color = "";
}