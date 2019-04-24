//
// Created by malavassi on 20/04/19.
//

#include "Vehiculo.h"
#include <iostream>
Vehiculo::Vehiculo(int tipo) {
    this->tipo = tipo;
    this->siguiente = NULL;
}
Vehiculo::Vehiculo() {
this->siguiente = NULL;
}