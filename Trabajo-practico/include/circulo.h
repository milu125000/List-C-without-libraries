#ifndef _CIRCULO_H_
#define _CIRCULO_H_

using namespace std;

typedef struct Circulo {
    float radio;
    string color;
}circulo;

Circulo crearCirculo(float radio, string color);
void setRadioCirculo(Circulo &circulo, float dato);
void setColorCirculo(Circulo &circulo, string dato);
float getRadioCirculo(Circulo &circulo);
string getColorCirculo(Circulo &circulo);
float areaCirculo(Circulo &circulo);
void borrarCirculo(Circulo &circulo);


#endif