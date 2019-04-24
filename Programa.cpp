//
// Created by malavassi on 23/04/19.
//

#include "Programa.h"
Programa::Programa(Vehiculo *vehiculo) {
    this->siguiente = NULL;
    this->vehicle = vehiculo;
    this->programa = new Cola();
    switch(vehiculo->tipo){
        case 1:
            this->programa->encolar(new Proceso('A',vehiculo->tipo));
            this->programa->encolar(new Proceso('B',vehiculo->tipo));
            this->programa->encolar(new Proceso('C',vehiculo->tipo));
            this->programa->encolar(new Proceso('D',vehiculo->tipo));
            this->programa->encolar(new Proceso('E',vehiculo->tipo));
            this->programa->encolar(new Proceso('F',vehiculo->tipo));

        case 2:
            this->programa->encolar(new Proceso('C',vehiculo->tipo));
            this->programa->encolar(new Proceso('A',vehiculo->tipo));
            this->programa->encolar(new Proceso('B',vehiculo->tipo));
            this->programa->encolar(new Proceso('E',vehiculo->tipo));
            this->programa->encolar(new Proceso('D',vehiculo->tipo));
            this->programa->encolar(new Proceso('F',vehiculo->tipo));
        case 3:
            this->programa->encolar(new Proceso('D',vehiculo->tipo));
            this->programa->encolar(new Proceso('E',vehiculo->tipo));
            this->programa->encolar(new Proceso('A',vehiculo->tipo));
            this->programa->encolar(new Proceso('C',vehiculo->tipo));
            this->programa->encolar(new Proceso('B',vehiculo->tipo));
            this->programa->encolar(new Proceso('F',vehiculo->tipo));
        case 4:
            this->programa->encolar(new Proceso('B',vehiculo->tipo));
            this->programa->encolar(new Proceso('C',vehiculo->tipo));
            this->programa->encolar(new Proceso('D',vehiculo->tipo));
            this->programa->encolar(new Proceso('A',vehiculo->tipo));
            this->programa->encolar(new Proceso('F',vehiculo->tipo));
            this->programa->encolar(new Proceso('E',vehiculo->tipo));
        case 5:
            this->programa->encolar(new Proceso('E',vehiculo->tipo));
            this->programa->encolar(new Proceso('F',vehiculo->tipo));
            this->programa->encolar(new Proceso('B',vehiculo->tipo));
            this->programa->encolar(new Proceso('C',vehiculo->tipo));
            this->programa->encolar(new Proceso('A',vehiculo->tipo));
            this->programa->encolar(new Proceso('D',vehiculo->tipo));
        case 6:
            this->programa->encolar(new Proceso('F',vehiculo->tipo));
            this->programa->encolar(new Proceso('D',vehiculo->tipo));
            this->programa->encolar(new Proceso('C',vehiculo->tipo));
            this->programa->encolar(new Proceso('B',vehiculo->tipo));
            this->programa->encolar(new Proceso('E',vehiculo->tipo));
            this->programa->encolar(new Proceso('A',vehiculo->tipo));
    }
    this->programa->mostrarCola();
}