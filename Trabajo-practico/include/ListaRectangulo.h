#ifndef LISTARECTANGULO_H
#define LISTARECTANGULO_H

using namespace std;

struct nudo{
  Rectangulo rectangulo;        // en este caso es un numero entero
  struct nudo *sig;
};

typedef struct nudo *ListaRectangulo;


void crearListaRectangulo(ListaRectangulo &lista);

//// para insertar un Cilindro al inicio
//Un cilindro debe estar creado antes de insertar
void insertarRectanguloInicio(ListaRectangulo &lista, Rectangulo rectangulo);
// se inserta el cilindro al final


// para insertar un Cilindro al final
// Un cilindro debe estar creado antes de insertar
void insertarRectanguloFinal(ListaRectangulo &lista, Rectangulo rectangulo);
// se inserta el cilindro al final


// se necesita una lista cargada (minimo un elemento) para poder mostrar
void mostrarListaRectangulo(ListaRectangulo &lista);
// se muestra la lista Cilindro

float plasticoPorColorRectangulo(ListaRectangulo &lista, string color);





#endif // LISTARECTANGULO_H
