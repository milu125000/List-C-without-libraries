
#ifndef LISTASCUBO_H
#define LISTASCUBO_H

using namespace std;

struct nido{
  Cubo cubo;        // en este caso es un numero entero
  struct nido *sig;
};

typedef struct nido *ListaCubo;


void crearListaCubo(ListaCubo &lista);

//// para insertar un Cubo al inicio
//Un Cubo debe estar creado antes de insertar
void insertarCuboInicio(ListaCubo &lista, Cubo cubo);
// se inserta el Cubo al inicio

// para insertar un Cubo al final
// Un Cubo debe estar creado antes de insertar
void insertarCuboFinal(ListaCubo &lista, Cubo cubo);
// se inserta el Cubo al final


// se necesita una lista cargada (minimo un elemento) para poder mostrar
void mostrarListaCubo(ListaCubo &lista);
// se muestra la lista Cubo


float plasticoTotalCubo(ListaCubo &lista);

float plasticoPorColorCubo(ListaCubo &lista, string color);

////////////////////////////////////////////////////////////////////////////////////////
#endif
