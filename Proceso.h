//
// Created by malavassi on 20/04/19.
//

#ifndef CARFACTORY_PROCESO_H
#define CARFACTORY_PROCESO_H

#include <string>

using namespace std;

class Proceso {
public:
Proceso *siguiente;
char tipo;
int tiempo_restante;
string estado; //estado en el que se encuentra el proceso, hay que analizar si se puede omitir mediante verificaciones con el tiempo restante
string id_vehiculo; //vehiculo al que pertenece el procesp




};


#endif //CARFACTORY_PROCESO_H
