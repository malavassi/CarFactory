//
// Created by malavassi on 23/04/19.
//

#ifndef CARFACTORY_VEHICULO_H
#define CARFACTORY_VEHICULO_H


#include "Cola.h"

class Vehiculo {
public:
    Cola *programa;
    Vehiculo(int tipo);
    Vehiculo(int tipo, int id);
    Vehiculo *siguiente;
    int id;
    int tipo;
};


#endif //CARFACTORY_VEHICULO_H
