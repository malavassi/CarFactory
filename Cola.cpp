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
    cout<<"Mostrando cola"<<endl;
    while(aux!=NULL){
        cout<<"---------------------------------"<<endl;
        cout<<"Tipo: "<<aux->tipo<<endl;
        cout<<"Tiempo restante: "<<aux->tiempo_restante<<endl;
        cout<<"Estado: "<<aux->estado<<endl;
        aux = aux->siguiente;
    }
    cout<<"---------------------------------"<<endl<<"---------------------------------"<<endl;
}

Cola::Cola() {
    this->rear = NULL;
    this->front = NULL;
}

Proceso Cola::retornarMayorTiempo() {
    Proceso *aux1 = this->front;
    Proceso *aux2 = this->rear;
    Proceso *aux3 = this->front->siguiente;
    Proceso *aux4 = new Proceso('Z',1);

    if (this->size() < 3) {
        free(aux1);
        free(aux2);
        free(aux3);
        cout<< "No es necesario sacar ningun proceso de la agenda" << endl;
        return *aux4;
    } else {
        free(aux4);
        if (aux1->tiempo_restante >= aux2->tiempo_restante && aux1->tiempo_restante >= aux3->tiempo_restante) {
            this->mostrarCola();
            this->desencolar();
            free(aux2);
            free(aux3);
            cout << "Sale el tipo: " << aux1->tipo << " con un tiempo restante de: " << aux1->tiempo_restante << endl;
            return *aux1;
        } else if (aux2->tiempo_restante >= aux1->tiempo_restante && aux2->tiempo_restante >= aux3->tiempo_restante) {
            this->mostrarCola();
            this->vaciarCola();
            this->encolar(aux1);
            this->encolar(aux3);
            free(aux1);
            free(aux3);
            cout << "Sale el tipo: " << aux2->tipo << " con un tiempo restante de: " << aux2->tiempo_restante << endl;
            return *aux2;
        } else if (aux3->tiempo_restante >= aux1->tiempo_restante && aux3->tiempo_restante >= aux2->tiempo_restante) {
            this->mostrarCola();
            this->vaciarCola();
            this->encolar(aux1);
            this->encolar(aux2);
            free(aux1);
            free(aux2);
            cout << "Sale el tipo: " << aux3->tipo << " con un tiempo restante de: " << aux3->tiempo_restante << endl;
            return *aux3;
        }

    }
}

int Cola::size() {
    Proceso *aux;
    int contador = 0;
    aux = this->front;
    while(aux!=NULL){
        contador += 1;
        aux = aux->siguiente;
    }
    cout << "EL tamano de la cola es de "<< contador << endl;
    return contador;
}

void Cola::vaciarCola() {
    Proceso *aux;

    while(aux!=NULL){
        aux = this->front;
        aux = aux->siguiente;
        delete aux;
    }
    this->front = NULL;
    this->rear = NULL;
}

