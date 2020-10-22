#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/triangulo.h"
#include "include/listaTriangulo.h"

using namespace std;

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
    ListaTriangulo aux = lista;
    while(lista != NULL){
        cout << "Triangulo " << i+1 << ":" << endl;
        cout << "Cateto mayor: " << lista->triangulo.catetoMayor << endl;
        cout << "Cateto menor: " << lista->triangulo.catetoMenor << endl;
        cout << "Color: " << lista->triangulo.color << endl;
        cout << "Cantidad de Plastico: " << areaTriangulo(lista->triangulo) << endl;
        lista = lista->sig;
        i++;
    }
    cout << endl;
    lista = aux;
}

float plasticoTotalTriangulo(ListaTriangulo &lista){
    float res = 0;
    ListaTriangulo aux = lista;
    while(lista != NULL){
        res += areaTriangulo(lista->triangulo);
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

float plasticoPorColorTriangulo(ListaTriangulo &lista, string color){
    ListaTriangulo aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> triangulo.color.compare(color) == 0){
            res += areaTriangulo(lista -> triangulo);
        }
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

