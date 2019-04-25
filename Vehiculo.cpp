//
// Created by malavassi on 23/04/19.
//

#include "Vehiculo.h"
Vehiculo::Vehiculo(int tipo) {
    this->siguiente = NULL;
    this->tipo = tipo;
    this->programa = new Cola();
    switch(tipo){
        case 1:
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            break;
        case 2:
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            break;
        case 3:
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            break;
        case 4:
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            break;
        case 5:
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            break;
        case 6:
            this->programa->encolar(new Proceso('F',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            break;
    }
    this->programa->mostrarCola();
}

Vehiculo::Vehiculo(int tipo, int id) {
    this->id = id;
    this->siguiente = NULL;
    this->tipo = tipo;
    this->programa = new Cola();
    switch(tipo){
        case 1:
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            break;
        case 2:
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            break;
        case 3:
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            break;
        case 4:
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            break;
        case 5:
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('F',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            break;
        case 6:
            this->programa->encolar(new Proceso('F',tipo,this->id));
            this->programa->encolar(new Proceso('D',tipo,this->id));
            this->programa->encolar(new Proceso('C',tipo,this->id));
            this->programa->encolar(new Proceso('B',tipo,this->id));
            this->programa->encolar(new Proceso('E',tipo,this->id));
            this->programa->encolar(new Proceso('A',tipo,this->id));
            break;
    }
    this->programa->mostrarCola();
}