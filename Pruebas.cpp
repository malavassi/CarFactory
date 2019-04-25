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
    //aux->mostrarEspacioProduccion();
    return *aux;
}

Pruebas::Pruebas() {
    idVehiculo = -1;
}

void Pruebas::distribuirProceso(Cola a, Cola b, Cola c, Cola d, Cola e, Cola f, Proceso p) {
    char tipo = p.tipo;
    switch(tipo){
        case 'A':
            a.encolar(&p);
            break;
        case 'B':
            b.encolar(&p);
            break;
        case 'C':
            c.encolar(&p);
            break;
        case 'D':
            d.encolar(&p);
            break;
        case 'E':
            e.encolar(&p);
            break;
        case 'F':
            f.encolar(&p);
            break;
    }
}



