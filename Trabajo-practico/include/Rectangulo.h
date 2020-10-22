#ifndef RECTANGULO_H
#define RECTANGULO_H

using namespace std;

typedef struct Rectangulo {
    float base;
    float altura;
    string color;
}rectangulo;

Rectangulo crearRectangulo(float base, float altura, string color);

void setBase(Rectangulo &rectangulo, float dato);

void setAltura(Rectangulo &rectangulo, float dato);

void setColorRectangulo(Rectangulo &rectangulo, string dato);

float getBase(Rectangulo &rectangulo);

float getAltura(Rectangulo &rectangulo);

string getColorRectangulo(Rectangulo &rectangulo);

float areaRectangulo(Rectangulo &rectangulo);

void borrarRectangulo(Rectangulo &rectangulo);

#endif // RECTANGULO_H
