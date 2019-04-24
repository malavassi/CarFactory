//
// Created by malavassi on 23/04/19.
//

#ifndef CARFACTORY_PROGRAMA_H
#define CARFACTORY_PROGRAMA_H


#include "Cola.h"

class Programa {
public:
    Cola *programa;
    Vehiculo *vehicle;
    Programa(Vehiculo *vehiculo);
};


#endif //CARFACTORY_PROGRAMA_H
