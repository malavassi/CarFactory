//
// Created by malavassi on 20/04/19.
//

#ifndef CARFACTORY_PROCESO_H
#define CARFACTORY_PROCESO_H

#include <string>
#include "Vehiculo.h"

using namespace std;

class Proceso {
public:
Proceso *siguiente;
char tipo;
int tiempo_restante;
string estado; //estado en el que se encuentra el proceso, hay que analizar si se puede omitir mediante verificaciones con el tiempo restante
Vehiculo vehiculo; //vehiculo al que pertenece el procesp
Proceso(char tipo, Vehiculo veh);



};


#endif //CARFACTORY_PROCESO_H
