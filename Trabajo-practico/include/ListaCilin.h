#ifndef LISTACILINDRO_H_
#define LISTACILINDRO_H_


using namespace std;
struct nodos{
       Cilin cilindro;
       struct nodos *sgte;
};

typedef struct nodos *ListaCilindro;

//// para insertar un Cilindro al inicio
//Un cilindro debe estar creado antes de insertar

void insertarInicioCilin(ListaCilindro &lista, Cilin val);
// se inserta el cilindro al final

// para insertar un Cilindro al final
// Un cilindro debe estar creado antes de insertar

void insertarFinalCilin(ListaCilindro &lista, Cilin valor);
// se inserta el cilindro al final


// se necesita una lista cargada (minimo un elemento) para poder mostrar

void mostrarListaCilin(ListaCilindro &lista);
// se muestra la lista Cilindro

// necesita una lista cargada (minimo dos elementos) para poder ordenar
// NO TOCAR LA LISTA ORIGINAL

float plasticoTotalCilin(ListaCilindro &lista);
//  se ordena la lista Cilin

float plasticoPorColorCilin(ListaCilindro &lista, string color);

// creamos una lista
void crearListaCilindro(ListaCilindro &lista);
// se crea la lista cilin

////////////////////////////////////////////////////////////////////////////////////////


#endif // LISTACILIN_H_INCLUDED
