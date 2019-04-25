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
            this->programa->encolar(new Proceso('A',tipo));
            this->programa->encolar(new Proceso('B',tipo));
            this->programa->encolar(new Proceso('C',tipo));
            this->programa->encolar(new Proceso('D',tipo));
            this->programa->encolar(new Proceso('E',tipo));
            this->programa->encolar(new Proceso('F',tipo));
            break;
        case 2:
            this->programa->encolar(new Proceso('C',tipo));
            this->programa->encolar(new Proceso('A',tipo));
            this->programa->encolar(new Proceso('B',tipo));
            this->programa->encolar(new Proceso('E',tipo));
            this->programa->encolar(new Proceso('D',tipo));
            this->programa->encolar(new Proceso('F',tipo));
            break;
        case 3:
            this->programa->encolar(new Proceso('D',tipo));
            this->programa->encolar(new Proceso('E',tipo));
            this->programa->encolar(new Proceso('A',tipo));
            this->programa->encolar(new Proceso('C',tipo));
            this->programa->encolar(new Proceso('B',tipo));
            this->programa->encolar(new Proceso('F',tipo));
            break;
        case 4:
            this->programa->encolar(new Proceso('B',tipo));
            this->programa->encolar(new Proceso('C',tipo));
            this->programa->encolar(new Proceso('D',tipo));
            this->programa->encolar(new Proceso('A',tipo));
            this->programa->encolar(new Proceso('F',tipo));
            this->programa->encolar(new Proceso('E',tipo));
            break;
        case 5:
            this->programa->encolar(new Proceso('E',tipo));
            this->programa->encolar(new Proceso('F',tipo));
            this->programa->encolar(new Proceso('B',tipo));
            this->programa->encolar(new Proceso('C',tipo));
            this->programa->encolar(new Proceso('A',tipo));
            this->programa->encolar(new Proceso('D',tipo));
            break;
        case 6:
            this->programa->encolar(new Proceso('F',tipo));
            this->programa->encolar(new Proceso('D',tipo));
            this->programa->encolar(new Proceso('C',tipo));
            this->programa->encolar(new Proceso('B',tipo));
            this->programa->encolar(new Proceso('E',tipo));
            this->programa->encolar(new Proceso('A',tipo));
            break;
    }
    this->programa->mostrarCola();
}