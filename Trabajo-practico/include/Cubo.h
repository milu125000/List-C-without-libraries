#ifndef _CUBO_H_
#define _CUBO_H_

using namespace std;

typedef struct Cubo {
    float Lado;
    string color;
}c;

Cubo crearCubo(float Lado, string color);
void setLado(Cubo &c, float dato);
void setColorCubo(Cubo &c, string dato);
float getLado(Cubo &c);
string getColorCubo(Cubo &c);
float areaCubo(Cubo &c);
void borrarCubo(Cubo &c);


#endif
