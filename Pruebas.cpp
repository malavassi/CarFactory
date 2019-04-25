//
// Created by malavassi on 23/04/19.
//

#include "Pruebas.h"
#include "LineaProduccion.h"

LineaProduccion Pruebas::crearLinea(int numero, int tipo) {
    LineaProduccion *nueva_linea = new LineaProduccion(tipo);
    int contador = 0;
    while(contador < numero){
        idVehiculo+=1;
        nueva_linea->encolar(new Vehiculo(tipo,idVehiculo));
        contador += 1;
    }
    nueva_linea->mostrarLineaProduccion();
    return *nueva_linea;
}

EspacioProduccion Pruebas::crearEspacio(int a, int b, int c, int d, int e, int f) {
    EspacioProduccion *aux = new EspacioProduccion();
    LineaProduccion Linea_1 = this->crearLinea(a,1);
    LineaProduccion Linea_2 = this->crearLinea(b,2);
    LineaProduccion Linea_3 = this->crearLinea(c,3);
    LineaProduccion Linea_4 = this->crearLinea(d,4);
    LineaProduccion Linea_5 = this->crearLinea(e,5);
    LineaProduccion Linea_6 = this->crearLinea(f,6);

    aux->encolar(&Linea_1);
    aux->encolar(&Linea_2);
    aux->encolar(&Linea_3);
    aux->encolar(&Linea_4);
    aux->encolar(&Linea_5);
    aux->encolar(&Linea_6);
    aux->mostrarEspacioProduccion();
    return *aux;
}

void Pruebas::inicializar(EspacioProduccion espacio, Cola cola_general) {
    LineaProduccion linea_aux = *espacio.front;
    int contador = 0;
    while(contador < 6){
        if(linea_aux.front->programa->front != NULL){
            cola_general.encolar(linea_aux.front->programa->front);
        }else{
            cout << "La linea de produccion de vehiculos tipo " << linea_aux.nombre << " ya finalizo la construccion de todos los vehiculos" << endl;
        }
        linea_aux = *linea_aux.siguiente;
        contador +=1;
    }
    cola_general.mostrarCola();
    cola_general.size();
}

Pruebas::Pruebas() {
    idVehiculo = -1;
}



