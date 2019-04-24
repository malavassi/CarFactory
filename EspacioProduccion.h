//
// Created by malavassi on 24/04/19.
//

#ifndef CARFACTORY_ESPACIOPRODUCCION_H
#define CARFACTORY_ESPACIOPRODUCCION_H

#include <iostream>
#include "LineaProduccion.h"

class EspacioProduccion {
public:
    LineaProduccion *front;
    LineaProduccion *rear;

    void encolar(LineaProduccion *vehicle);
    LineaProduccion desencolar();
    void mostrarEspacioProduccion();
    void vaciarEspacioProduccion();
    EspacioProduccion();
};

#endif //CARFACTORY_ESPACIOPRODUCCION_H
