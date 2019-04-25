#include <iostream>
#include <unistd.h>
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
    //creacion de la clase auxiliar para ejecutar las pruebas
   Pruebas *a = new Pruebas();
    //creacion de la cola de espera general
    Cola cola_general;
    //creacion de las lindeas de produccion
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

    //creacion de las agendas de los procesos
    Cola *Agenda_A = new Cola();
    Cola *Agenda_B = new Cola();
    Cola *Agenda_C = new Cola();
    Cola *Agenda_D = new Cola();
    Cola *Agenda_E = new Cola();
    Cola *Agenda_F = new Cola();

    //insercion de procesos iniciales a las agendas de procesos
    Proceso *aux = cola_general.front;
    while (aux!=NULL){
            a->distribuirProceso(*Agenda_A,*Agenda_B,*Agenda_C,*Agenda_D,*Agenda_E,*Agenda_F,*aux);
            cola_general.desencolar();
            aux = cola_general.front;
    }
    bool finalizado = false;
    int contador = 10; //reiniciar a 0
    while(finalizado != true){
        if(contador % 5 == 0 && contador != 0){
            Proceso *aux1 = cola_general.front;
            a->distribuirProceso(*Agenda_A,*Agenda_B,*Agenda_C,*Agenda_D,*Agenda_E,*Agenda_F,*aux1);
        }
    }


    return 0;
}
