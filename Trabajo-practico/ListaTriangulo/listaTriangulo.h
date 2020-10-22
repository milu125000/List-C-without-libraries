#ifndef _LISTATRIANGULO_H_
#include "../Triangulo/triangulo.h"
#define _LISTATRIANGULO_H_

using namespace std;
 
struct nodo{
  Triangulo triangulo;        // en este caso es un numero entero
  struct nodo *sig;
};
 
typedef struct nodo *ListaTriangulo;


void crearListaTriangulo(ListaTriangulo &lista);

//// para insertar un Cilindro al inicio
//Un cilindro debe estar creado antes de insertar
void insertarTrianguloInicio(ListaTriangulo &lista, Triangulo triangulo);
// se inserta el cilindro al final 

// para insertar un Cilindro al final
// Un cilindro debe estar creado antes de insertar
void insertarTrianguloFinal(ListaTriangulo &lista, Triangulo triangulo);
// se inserta el cilindro al final


// se necesita una lista cargada (minimo un elemento) para poder mostrar
void mostrarListaTriangulo(ListaTriangulo &lista);
// se muestra la lista Cilindro

// necesita una lista cargada (minimo dos elementos) para poder ordenar
// NO TOCAR LA LISTA ORIGINAL 
void ordenarListaTrianguloTotal(ListaTriangulo &lista);
//  se ordena la lista Cilin


////////////////////////////////////////////////////////////////////////////////////////
#endif