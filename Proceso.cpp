//
// Created by malavassi on 20/04/19.
//

#include "Proceso.h"
Proceso::Proceso(char tipo, Vehiculo veh) {
    this->vehiculo = veh;
    int tipo_vehiculo = veh.tipo;
    this->estado = "Incompleto";
    this->siguiente = NULL;
    this->tipo = tipo;

    switch (tipo_vehiculo) {
        case 1:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 2;
                case 'B':
                    this->tiempo_restante = 2;
                case 'C':
                    this->tiempo_restante = 4;
                case 'D':
                    this->tiempo_restante = 1;
                case 'E':
                    this->tiempo_restante = 3;
                case 'F':
                    this->tiempo_restante = 1;
            }
        case 2:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 1;
                case 'B':
                    this->tiempo_restante = 1;
                case 'C':
                    this->tiempo_restante = 2;
                case 'D':
                    this->tiempo_restante = 3;
                case 'E':
                    this->tiempo_restante = 2;
                case 'F':
                    this->tiempo_restante = 1;
            }
        case 3:;
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 3;
                case 'B':
                    this->tiempo_restante = 1;
                case 'C':
                    this->tiempo_restante = 2;
                case 'D':
                    this->tiempo_restante = 1;
                case 'E':
                    this->tiempo_restante = 4;
                case 'F':
                    this->tiempo_restante = 1;
            }
        case 4:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 3;
                case 'B':
                    this->tiempo_restante = 2;
                case 'C':
                    this->tiempo_restante = 1;
                case 'D':
                    this->tiempo_restante = 4;
                case 'E':
                    this->tiempo_restante = 1;
                case 'F':
                    this->tiempo_restante = 2;
            }
        case 5:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 1;
                case 'B':
                    this->tiempo_restante = 2;
                case 'C':
                    this->tiempo_restante = 4;
                case 'D':
                    this->tiempo_restante = 3;
                case 'E':
                    this->tiempo_restante = 4;
                case 'F':
                    this->tiempo_restante = 1;
            }
        case 6:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 4;
                case 'B':
                    this->tiempo_restante = 4;
                case 'C':
                    this->tiempo_restante = 2;
                case 'D':
                    this->tiempo_restante = 1;
                case 'E':
                    this->tiempo_restante = 3;
                case 'F':
                    this->tiempo_restante = 1;
            }
    }
}