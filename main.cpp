#include <iostream>
#include "LineaProduccion.h"
#include "Pruebas.h"
#include "Cola.h"

using namespace std;
int main() {
   Pruebas *a = new Pruebas();
    /*Cola b;
    a->inicializar(a->crearEspacio(1,1,1,1,1,1),b);
    b.mostrarCola();*/
    //-----------------------------------------------------------
    Cola cola_general;
    LineaProduccion linea_1 = a->crearLinea(1,1);
    LineaProduccion linea_2 = a->crearLinea(1,2);
    LineaProduccion linea_3 = a->crearLinea(1,3);
    LineaProduccion linea_4 = a->crearLinea(1,4);
    LineaProduccion linea_5 = a->crearLinea(1,5);
    LineaProduccion linea_6 = a->crearLinea(1,6);

    cola_general.encolar(linea_1.front->programa->front);
    cola_general.encolar(linea_2.front->programa->front);
    cola_general.encolar(linea_3.front->programa->front);
    cola_general.encolar(linea_4.front->programa->front);
    cola_general.encolar(linea_5.front->programa->front);
    cola_general.encolar(linea_6.front->programa->front);

    cola_general.mostrarCola();
    cola_general.size();




    return 0;
}