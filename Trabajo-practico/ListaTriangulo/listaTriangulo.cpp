#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "listaTriangulo.h"
#include "../Triangulo/triangulo.h"

void insertarTrianguloInicio(ListaTriangulo &lista, Triangulo triangulo){
  ListaTriangulo q;
  q = new(struct nodo);
  q->triangulo = triangulo;
  q->sig = lista;
  lista  = q;
}

void crearListaTriangulo(ListaTriangulo &lista){
  lista = NULL;
}


void insertarTrianguloFinal(ListaTriangulo &lista, Triangulo triangulo){
  ListaTriangulo t, q = new(struct nodo);

  q->triangulo  = triangulo;
  q->sig = NULL;

  if(lista==NULL){
    lista = q;
  }

  else{
    t = lista;

    while(t->sig != NULL){
        t = t->sig;
    }
    t->sig = q;
  }
}

void mostrarListaTriangulo(ListaTriangulo &lista){
  int i = 0;
 
  while(lista != NULL){
      cout << i+1 << "). " << endl;
      cout << "Cateto mayor: " << lista->triangulo.catetoMayor << endl;
      cout << "Cateto menor: " << lista->triangulo.catetoMenor << endl;
      cout << "Color: " << lista->triangulo.color << endl;
      lista = lista->sig;
      i++;
  }
}

void ordenarListaTrianguloTotal(ListaTriangulo &lista){

}

