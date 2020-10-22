#include <iostream>
#include <cstdlib>
#include <math.h>
#include "include/Cilin.h"

# define M_PIl          3.141592653589793238462643383279502884L
using namespace std;


////////////////////set////////////////////////////////////
void setAlturaCilin(Cilin &c, float newAlt ){
    c.h= newAlt;
}

void setRadioCilin(Cilin &c, float newRadio){
    c.radio= newRadio;
}

void setColorCilin(Cilin &c, string newColor){
    c.color= newColor;
}
/////////////////////////////////////////////////////////

////////////////////gets/////////////////////////////////
float getAlturaCilin(Cilin &c){
    return c.h;
}

float getRadioCilin(Cilin &c){
    return c.radio;
}

string getColorCilin(Cilin &c){
    return c.color;

}
//////////////////////////////////////////////////////////

//////////////////creador////////////////////////////////
Cilin crearCilindro(float r, float altura, string co){
   Cilin c;
    
    c.radio=r;
    
    c.h=altura;
    
    c.color=co;
    return c;
}

float areaCilin(Cilin &c){
    float area;
    area= 2*M_PIl*c.radio*(c.radio+c.h);
    return area;
}
/////////////////////////////////////////////////////////

//////////////////////borrar////////////////////////////
void borrarCilindro(Cilin &c){
    delete &c;
    c.color="";
}
////////////////////////////////////////////////////////
