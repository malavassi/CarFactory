//
// Created by malavassi on 20/04/19.
//

#ifndef CARFACTORY_VEHICULO_H
#define CARFACTORY_VEHICULO_H


#include "Cola.h"

class Vehiculo {
public:
int tipo;
Cola cola_vehiculo;
Vehiculo(int tipo);
Vehiculo();
};


#endif //CARFACTORY_VEHICULO_H
