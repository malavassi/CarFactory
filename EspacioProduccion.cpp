//
// Created by malavassi on 24/04/19.
//

#include "EspacioProduccion.h"
#include "LineaProduccion.h"

void EspacioProduccion::encolar(LineaProduccion *vehicle) {
    if(this->front == NULL){
        this->front = vehicle;
        this->contadorLineas += 1;
    }else{
        (this->rear)->siguiente = vehicle;
        this->contadorLineas += 1;
    }

    this->rear = vehicle;

}

LineaProduccion EspacioProduccion::desencolar() {
    LineaProduccion *aux;
    aux = this->front;
    this->front = (this->front)->siguiente;
    this->contadorLineas -=1;
    return *aux;
}

void EspacioProduccion::mostrarEspacioProduccion() {
    LineaProduccion *aux;
    aux = this->front;
    cout<<"Mostrando espacio de produccion"<<endl;
    while(aux!=NULL){
        cout<<"---------------------------------"<<endl;
        cout<<"Tipo: "<<aux->nombre<<endl;
        aux = aux->siguiente;
    }
    cout<<"---------------------------------"<<endl<<"---------------------------------"<<endl;
}

EspacioProduccion::EspacioProduccion() {
    this->front = NULL;
    this->rear = NULL;
    this->idVehiculo = -1;
    this->contadorLineas = 0;
 }
