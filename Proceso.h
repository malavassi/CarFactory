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
Proceso *siguienteColaGeneral;
char tipo;
int tiempo_restante;
int id_vehiculo;
int estado; // 1 incompleto - 2 completo - estado en el que se encuentra el proceso, hay que analizar si se puede omitir mediante verificaciones con el tiempo restante
int tipo_vehiculo;
Proceso(char tipo, int tipo_vehiculo);
Proceso(char tipo, int tipo_vehiculo, int id);
Proceso();



};


#endif //CARFACTORY_PROCESO_H
