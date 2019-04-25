#include <iostream>
#include "LineaProduccion.h"
#include "Pruebas.h"
#include "Cola.h"

using namespace std;

void enviarACola(EspacioProduccion espacio, Cola *cola_general,bool primerEnvio) {
    LineaProduccion *linea_aux = espacio.front;
    int contadorLineas = 0;
    int contadorVehiculos =0;
    int contadorProcesos =0;
    int maxLineas = espacio.contadorLineas;
    int maxVehiculos = 0;
    int maxProcesos = 0;
    LineaProduccion *punteroRecorreEspacio = espacio.front;
    Vehiculo *punteroRecorreVehiculo = punteroRecorreEspacio->front;

    char tipo;
    int tipoVehiculo;
    int id_vehiculo;
    Proceso *punteroRecorreProcesos = punteroRecorreVehiculo->programa->front;

    if (primerEnvio == false){

        while(contadorLineas < maxLineas){

            maxVehiculos = punteroRecorreEspacio->cantidadVehiculosLinea;

            while(contadorVehiculos < maxVehiculos) {

                if (punteroRecorreVehiculo!= nullptr){

                    tipo = punteroRecorreVehiculo->programa->front->tipo;
                    tipoVehiculo = punteroRecorreVehiculo->programa->front->tipo_vehiculo;
                    id_vehiculo = punteroRecorreVehiculo->programa->front->id_vehiculo;
                    cola_general->encolar(new Proceso(tipo,tipoVehiculo,id_vehiculo));
                    punteroRecorreVehiculo = punteroRecorreVehiculo->siguiente;
                }

                contadorVehiculos+=1;
            }

            punteroRecorreEspacio = punteroRecorreEspacio->siguiente;
            punteroRecorreVehiculo = punteroRecorreEspacio->front;///
            contadorVehiculos = 0;
            contadorLineas +=1;
        }

        primerEnvio = true;
    }

    else{

        LineaProduccion *punteroRecorreEspacio = espacio.front;
        Vehiculo *punteroRecorreVehiculo = punteroRecorreEspacio->front;
        Proceso *punteroRecorreProcesos = punteroRecorreVehiculo->programa->front;

        int contadorLineas = 0;
        int contadorVehiculos =0;
        int contadorProcesos =0;

        while(contadorLineas < maxLineas){

            maxVehiculos = punteroRecorreEspacio->cantidadVehiculosLinea;

            while(contadorVehiculos < maxVehiculos){

                maxProcesos = punteroRecorreVehiculo->programa->size();

                while(contadorProcesos < maxProcesos){

                    if(punteroRecorreProcesos == nullptr){
                        break;
                    }

                    else{

                        if(punteroRecorreProcesos->estado == 2){
                            punteroRecorreVehiculo->programa->desencolar();

                            if(punteroRecorreProcesos->siguiente!=nullptr){
                                cola_general->encolar(punteroRecorreProcesos->siguiente);
                                break;
                            }

                        }

                        punteroRecorreProcesos = punteroRecorreProcesos->siguiente;
                        contadorProcesos+=1;
                    }

                }

                punteroRecorreVehiculo = punteroRecorreVehiculo->siguiente;
                contadorProcesos = 0;
                contadorVehiculos+=1;
            }


            punteroRecorreEspacio = punteroRecorreEspacio->siguiente;
            contadorVehiculos = 0;
            contadorProcesos = 0;
            contadorLineas +=1;
        }

    }

}

int main() {
   Pruebas *a = new Pruebas();
   EspacioProduccion espacioProduccion = a->crearEspacio(1,1,1,1,1,1);
   /*Cola b;
    a->inicializar(a->crearEspacio(1,1,1,1,1,1),b);
    b.mostrarCola();*/
    //-----------------------------------------------------------
    Cola *cola_general = new Cola();


    enviarACola(espacioProduccion,cola_general,false);

    //cola_general.mostrarCola();
    cola_general->size();


    return 0;
}
