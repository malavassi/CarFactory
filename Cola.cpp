//
// Created by malavassi on 20/04/19.
//

#include "Cola.h"
using namespace std;
#include <iostream>

void Cola::encolar(Proceso *process) {
    if(this->front == NULL){
        this->front = process;
    }else{
        (this->rear)->siguiente = process;
    }

    this->rear = process;

}

Proceso Cola::desencolar() {
    Proceso *aux;
    aux = this->front;
    this->front = (this->front)->siguiente;
    return *aux;
}

void Cola::mostrarCola() {
    Proceso *aux;
    aux = this->front;

    while(aux!=NULL){
        cout<<"---------------------------------"<<endl;
        cout<<"Tipo: "<<aux->tipo<<endl;
        cout<<"Vehiculo al que pertenece: "<<aux->id_vehiculo<<endl;
        cout<<"Tiempo restante: "<<aux->tiempo_restante<<endl;
        cout<<"Estado: "<<aux->estado<<endl;
    }
}

