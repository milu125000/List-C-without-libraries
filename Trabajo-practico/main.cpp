#include <iostream>
#include "Triangulo/triangulo.h"
#include "ListaTriangulo/listaTriangulo.h"

int main() {
  Triangulo triangulo;
  triangulo.catetoMayor = 2;
  triangulo.catetoMenor = 3;
  triangulo.color = "Azul";

  Triangulo triangulo2;
  triangulo2.catetoMenor = 3;
  triangulo2.catetoMayor = 4;
  triangulo2.color = "Rosa";
  
  Triangulo triangulo3;
  triangulo3.catetoMenor = 5;
  triangulo3.catetoMayor = 6;
  triangulo3.color = "Rojo";

  ListaTriangulo lista;
  crearListaTriangulo(lista);
  insertarTrianguloInicio(lista, triangulo);
  insertarTrianguloFinal(lista, triangulo2);
  mostrarListaTriangulo(lista);
  insertarTrianguloFinal(lista, triangulo3);
  mostrarListaTriangulo(lista);
  
}