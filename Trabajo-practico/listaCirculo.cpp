#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/circulo.h"
#include "include/listaCirculo.h"

using namespace std;

void insertarCirculoInicio(ListaCirculo &lista, Circulo circulo){
    ListaCirculo q;
    q = new(struct nodoCirculo);
    q->circulo = circulo;
    q->sig = lista;
    lista  = q;
}

void crearListaCirculo(ListaCirculo &lista){
    lista = NULL;
}


void insertarCirculoFinal(ListaCirculo &lista, Circulo circulo){
    ListaCirculo t, q = new(struct nodoCirculo);

    q->circulo  = circulo;
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

void mostrarListaCirculo(ListaCirculo &lista){
    int i = 0;
    ListaCirculo aux = lista;
    while(lista != NULL){
        cout << "Circulo " << i+1 << ":" << endl;
        cout << "Radio: " << lista->circulo.radio << endl;
        cout << "Color: " << lista->circulo.color << endl;
        cout << "Cantidad de Plastico: " << areaCirculo(lista->circulo) << endl;
        lista = lista->sig;
        i++;
    }
    cout << endl;
    lista = aux;
}

float plasticoTotalCirculo(ListaCirculo &lista){
    float res = 0;
    ListaCirculo aux = lista;
    while(lista != NULL){
        res += areaCirculo(lista->circulo);
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

float plasticoPorColorCirculo(ListaCirculo &lista, string color){
    ListaCirculo aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> circulo.color.compare(color) == 0){
            res += areaCirculo(lista -> circulo);
        }
        lista = lista->sig;
    }
    lista = aux;
    return res;
}
