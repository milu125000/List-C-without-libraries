#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "include/Cubo.h"
#include "include/ListasCubo.h"

using namespace std;

void insertarCuboInicio(ListaCubo &lista, Cubo cubo){
    ListaCubo q;
    q = new(struct nido);
    q->cubo = cubo;
    q->sig = lista;
    lista  = q;
}

void crearListaCubo(ListaCubo &lista){
    lista = NULL;
}


void insertarCuboFinal(ListaCubo &lista, Cubo cubo){
    ListaCubo t, q = new(struct nido);

    q->cubo  = cubo;
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

void mostrarListaCubo(ListaCubo &lista){
    int i = 0;
    ListaCubo temp = lista;
    while(lista != NULL){
        cout << "Cubo " << i+1 << ":" << endl;
        cout << "Lado: " << lista->cubo.Lado << endl;
        cout << "Color: " << lista->cubo.color << endl;
        cout << "Cantidad de Plastico: " << areaCubo (lista->cubo) << endl;
        lista = lista->sig;
        i++;
    }
    cout << endl;
    lista = temp;
}

float plasticoTotalCubo(ListaCubo &lista){
    float res = 0;
    ListaCubo aux = lista;
    while(lista != NULL){
        res += areaCubo(lista->cubo);
        lista = lista->sig;
    }
    lista = aux;
    return res;
}

float plasticoPorColorCubo(ListaCubo &lista, string color){
    ListaCubo aux = lista;
    float res = 0;

    while(lista != NULL){
        if(lista -> cubo.color.compare(color) == 0){
            res += areaCubo(lista -> cubo);
        }
        lista = lista->sig;
    }
    lista = aux;
    return res;
}
