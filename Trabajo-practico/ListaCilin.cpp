#include <iostream>
#include <stdlib.h>
#include "include/Cilin.h"
#include "include/ListaCilin.h"

using namespace std;
///////////////insertar/////////////////////////////////////
void insertarInicioCilin(ListaCilindro &lista, Cilin val){
        ListaCilindro p;
        p= new(struct nodos);
        p->cilindro = val;
        p->sgte= lista;
        lista=p;

}
///////////////////////////////////////////////////////////
///////////////////mostrar////////////////////////////////
void mostrarListaCilin(ListaCilindro &lista){
  int i=0;
  ListaCilindro listaw = lista; 
  while(lista !=NULL){
    cout << "Cilindro " << i+1 << ":"<< endl;
    cout << "Radio: " <<lista->cilindro.radio << endl;
    cout << "Altura: " << lista->cilindro.h << endl;
    cout << "Color: " <<lista->cilindro.color<< endl;
    cout << "Cantidad de Plastico:" << areaCilin(lista->cilindro) << endl;
    lista = lista->sgte;
    i++;
  }
  cout << endl;
  lista = listaw;
}
///////////////////////////////////////////////////////////
/////////////////////insertar final////////////////////////
void insertarFinalCilin(ListaCilindro &lista, Cilin valor){
        ListaCilindro g,h= new(struct nodos);
        h->cilindro= valor;
        h->sgte=NULL;

      if(lista==NULL){
          lista = h;
        }

          else{
               g = lista;

             while(g->sgte != NULL){
                   g = g->sgte;
                  }
            g->sgte = h;
          }

}


/////////////////////////////////////////////////////////
/////////////////crear lista/////////////////////////////
void crearListaCilindro(ListaCilindro  &lista){
        lista = NULL;
}

float plasticoTotalCilin(ListaCilindro &lista){
    float res = 0;
    ListaCilindro aux = lista;
    while(lista != NULL){
        res += areaCilin(lista->cilindro);
        lista = lista->sgte;
    }
    lista = aux;
    return res;
}

float plasticoPorColorCilin(ListaCilindro &lista, string color){
    ListaCilindro aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> cilindro.color.compare(color) == 0){
            res += areaCilin(lista -> cilindro);
        }
        lista = lista->sgte;
    }
    lista = aux;
    return res;
}