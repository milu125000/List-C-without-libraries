#ifndef _CILIN_H_
#define _CILIN_H_

using namespace std;

typedef struct Cilin{
    float radio;
    float h; // used as altura
    string color;
}cilindro;


//////////////////////////sets////////////////////
// for all gets, data pre-recorded in THE STRUCTURE (pointer) needed a new type of data (float type)

// needs newAlt and base in c
void setAlturaCilin(Cilin &cilindro, float newAlt );
// changes the data in radio

// needs newRadio and radio in c
void setRadioCilin(Cilin &cilindro, float newRadio);
// changes the data in radio

// needs newColor and color in c
void setColorCilin(Cilin &cilindro, string newColor);
// changes the data in color

/////////////////////////get//////////////////////////
// for all gets, data pre-recorded  in THE STRUCTURE (pointer) needed.

//needs altura
float getAlturaCilin(Cilin &cilindro);
//returns float altura

//needs radio
float getRadioCilin(Cilin &cilindro);
// returns float radio

// necesita string color
string getColorCilin(Cilin &cilindro);
// devuelve string color

////////////////////creador//////////////////////////////////

//necesita radio y altura . Solo un Cilin vacio.
Cilin crearCilindro(float radio, float altura,string color);
// devuelve un cilindro creado

//necesita un Cilindro cargado
float   areaCilin(Cilin &cilindro);
// devuelve el area calculada

///////////////////Borrar///////////////////////////////////

void borrarCilindro(Cilin &cilindro); // borra memoria


/////////////////////////////////////////////////////////////





#endif // CILINDRO_H_INCLUDED
