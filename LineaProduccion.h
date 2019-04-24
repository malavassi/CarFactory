//
// Created by malavassi on 20/04/19.
//

#ifndef CARFACTORY_LINEAPRODUCCION_H
#define CARFACTORY_LINEAPRODUCCION_H


#include "Vehiculo.h"
#include <iostream>
using namespace std;

class LineaProduccion {
public:
    Vehiculo *front;
    Vehiculo *rear;
    /*


    static LineaProduccion* unique_instance;

    static LineaProduccion *getInstance(){
        if(unique_instance == NULL){
            unique_instance = new LineaProduccion();
        }
        return unique_instance;
    };


*/
    void encolar(Vehiculo *vehicle);
    Vehiculo desencolar();
    void mostrarLineaProduccion();
    void vaciarLineaProduccion();
    LineaProduccion();
};


#endif //CARFACTORY_LINEAPRODUCCION_H
