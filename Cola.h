//
// Created by malavassi on 20/04/19.
//

#ifndef CARFACTORY_COLA_H
#define CARFACTORY_COLA_H


#include "Proceso.h"
#include <iostream>
using namespace std;

class Cola {
public:
    Proceso *front;
    Proceso *rear;
    /*


    static Cola* unique_instance;

    static Cola *getInstance(){
        if(unique_instance == NULL){
            unique_instance = new Cola();
        }
        return unique_instance;
    };


*/
    void encolar(Proceso *process);
    Proceso desencolar();
    void mostrarCola();
    void vaciarCola();
    Proceso retornarMayorTiempo(); //solo funciona para las agendas de procesos, que tienen un tamano de 3 procesos; de no cumplir lo anterior dara error
    Cola();
    int size();
    void verificarCompletados(Cola cola);
};


#endif //CARFACTORY_COLA_H
