//
// Created by malavassi on 20/04/19.
//

#include "LineaProduccion.h"
using namespace std;
#include <iostream>

void LineaProduccion::encolar(Vehiculo *vehicle) {
    if(this->front == NULL){
        this->front = vehicle;
    }else{
        (this->rear)->siguiente = vehicle;
    }

    this->rear = vehicle;

}

Vehiculo LineaProduccion::desencolar() {
    Vehiculo *aux;
    aux = this->front;
    this->front = (this->front)->siguiente;
    return *aux;
}

void LineaProduccion::mostrarLineaProduccion() {
    Vehiculo *aux;
    aux = this->front;

    while(aux!=NULL){
        cout<<"---------------------------------"<<endl;
        cout<<"Tipo: "<<aux->tipo<<endl;
        aux = aux->siguiente;
    }
}

LineaProduccion::LineaProduccion() {
    this->front = NULL;
    this->rear = NULL;
}

