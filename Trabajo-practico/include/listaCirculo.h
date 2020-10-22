#ifndef _LISTACIRCULO_H_
#define _LISTACIRCULO_H_

using namespace std;
 
struct nodoCirculo{
  Circulo circulo;        // en este caso es un numero entero
  struct nodoCirculo *sig;
};
 
typedef struct nodoCirculo *ListaCirculo;


void crearListaCirculo(ListaCirculo &lista);

//// para insertar un Cilindro al inicio
//Un cilindro debe estar creado antes de insertar
void insertarCirculoInicio(ListaCirculo &lista, Circulo circulo);
// se inserta el cilindro al final 

// para insertar un Cilindro al final
// Un cilindro debe estar creado antes de insertar
void insertarCirculoFinal(ListaCirculo &lista, Circulo circulo);
// se inserta el cilindro al final


// se necesita una lista cargada (minimo un elemento) para poder mostrar
void mostrarListaCirculo(ListaCirculo &lista);
// se muestra la lista Cilindro

// necesita una lista cargada (minimo dos elementos) para poder ordenar
// NO TOCAR LA LISTA ORIGINAL 
float plasticoTotalCirculo(ListaCirculo &lista);
//  se ordena la lista Cilin

float plasticoPorColorCirculo(ListaCirculo &lista, string color);

////////////////////////////////////////////////////////////////////////////////////////
#endif