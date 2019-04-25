//
// Created by malavassi on 23/04/19.
//

#ifndef CARFACTORY_PRUEBAS_H
#define CARFACTORY_PRUEBAS_H


#include "LineaProduccion.h"
#include "EspacioProduccion.h"

class Pruebas {

    int idVehiculo = -1;
    bool primerEnvio = false;

public:
    Pruebas();
    LineaProduccion crearLinea(int numero, int tipo);
EspacioProduccion crearEspacio(int a, int b, int c, int d, int e, int f);
void enviarACola(EspacioProduccion espacio, Cola *cola_general); //todos los primeros procesos de las colas los manda a la cola general para comenzar el procesamiento
};


#endif //CARFACTORY_PRUEBAS_H
