#ifndef _TRIANGULO_H_
#define _TRIANGULO_H_

using namespace std;

typedef struct Triangulo {
    float catetoMayor;
    float catetoMenor;
    string color;
}triangulo;

Triangulo crearTriangulo(float catetoMayor, float catetoMenor, string color);
void setCatetoMenor(Triangulo &triangulo, float dato);
void setCatetoMayor(Triangulo &triangulo, float dato);
void setColorTriangulo(Triangulo &triangulo, string dato);
float getCatetoMenor(Triangulo &triangulo);
float getCatetoMayor(Triangulo &triangulo);
string getColorTriangulo(Triangulo &triangulo);
float areaTriangulo(Triangulo &triangulo);
void borrarTriangulo(Triangulo &triangulo);


#endif