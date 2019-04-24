//
// Created by malavassi on 24/04/19.
//

#include "EspacioProduccion.h"
#include "LineaProduccion.h"

void EspacioProduccion::encolar(LineaProduccion *vehicle) {
    if(this->front == NULL){
        this->front = vehicle;
    }else{
        (this->rear)->siguiente = vehicle;
    }

    this->rear = vehicle;

}

LineaProduccion EspacioProduccion::desencolar() {
    LineaProduccion *aux;
    aux = this->front;
    this->front = (this->front)->siguiente;
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
}
