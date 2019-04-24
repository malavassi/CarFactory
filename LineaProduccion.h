//
// Created by malavassi on 20/04/19.
//

#ifndef CARFACTORY_LINEAPRODUCCION_H
#define CARFACTORY_LINEAPRODUCCION_H


#include "Programa.h"
#include <iostream>
using namespace std;

class LineaProduccion {
public:
    Programa *front;
    Programa *rear;
    LineaProduccion *siguiente;
    int nombre;
    /*


    static LineaProduccion* unique_instance;

    static LineaProduccion *getInstance(){
        if(unique_instance == NULL){
            unique_instance = new LineaProduccion();
        }
        return unique_instance;
    };


*/
    void encolar(Programa *vehicle);
    Programa desencolar();
    void mostrarLineaProduccion();
    void vaciarLineaProduccion();
    LineaProduccion(int nombre);
};


#endif //CARFACTORY_LINEAPRODUCCION_H
