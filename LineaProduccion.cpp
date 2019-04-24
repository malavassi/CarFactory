//
// Created by malavassi on 20/04/19.
//

#include "LineaProduccion.h"
#include "Programa.h"

using namespace std;
#include <iostream>

void LineaProduccion::encolar(Programa *vehicle) {
    if(this->front == NULL){
        this->front = vehicle;
    }else{
        (this->rear)->siguiente = vehicle;
    }

    this->rear = vehicle;

}

Programa LineaProduccion::desencolar() {
    Programa *aux;
    aux = this->front;
    this->front = (this->front)->siguiente;
    return *aux;
}

void LineaProduccion::mostrarLineaProduccion() {
    Programa *aux;
    aux = this->front;
    cout<<"Mostrando linea de produccion"<<endl;
    while(aux!=NULL){
        cout<<"---------------------------------"<<endl;
        cout<<"Tipo: "<<aux->vehicle->tipo<<endl;
        aux = aux->siguiente;
    }
    cout<<"---------------------------------"<<endl<<"---------------------------------"<<endl;
}

LineaProduccion::LineaProduccion(int nombre) {
    this->front = NULL;
    this->rear = NULL;
    this->siguiente = NULL;
    this->nombre = nombre;
}

