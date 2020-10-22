#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <string>
#include <string.h>
#include "include/Rectangulo.h"
#include "include/ListaRectangulo.h"

using namespace std;


void insertarRectanguloInicio(ListaRectangulo &lista, Rectangulo rectangulo){
    ListaRectangulo r;
    r = new(struct nudo);
    r->rectangulo = rectangulo;
    r->sig = lista;
    lista  = r;
}

void crearListaRectangulo(ListaRectangulo &lista){
    lista = NULL;
}


void insertarRectanguloFinal(ListaRectangulo &lista, Rectangulo rectangulo){
    ListaRectangulo t, r = new(struct nudo);

    r->rectangulo  = rectangulo;
    r->sig = NULL;

    if(lista==NULL){
        lista = r;
    }

    else{
        t = lista;

        while(t->sig != NULL){
            t = t->sig;
        }
        t->sig = r;
    }
}


void mostrarListaRectangulo(ListaRectangulo &lista){
    int i = 0;
    ListaRectangulo temp = lista;
    while(lista != NULL){
        cout << "Rectangulo " << i+1 << ":" << endl;
        cout << "Base: " << lista->rectangulo.base << endl;
        cout << "Altura: " << lista->rectangulo.altura << endl;
        cout << "Color: " << lista->rectangulo.color << endl;
        cout << "Total de Plastico:" << areaRectangulo(lista->rectangulo) << endl; 
        lista = lista->sig;
        i++;
    }
    cout << endl;
    lista = temp;
}

float plasticoTotalRectangulo(ListaRectangulo &lista){
    float res = 0;
    ListaRectangulo aux = lista;
    while(lista != NULL){
        res += areaRectangulo(lista->rectangulo);
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

float plasticoPorColorRectangulo(ListaRectangulo &lista, string color){
    ListaRectangulo aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> rectangulo.color.compare(color) == 0){
            res += areaRectangulo(lista -> rectangulo);
        }
        lista = lista->sig;
    }
    lista = aux;
    return res;
}