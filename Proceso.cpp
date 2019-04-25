//
// Created by malavassi on 20/04/19.
//

#include "Proceso.h"

Proceso::Proceso() {

}


Proceso::Proceso(char tipo, int tipo_vehiculo, int id) {
    this->id_vehiculo = id;
    this->estado = "Incompleto";
    this->siguiente = NULL;
    this->tipo = tipo;
    this->tiempo_restante = NULL;

    switch (tipo_vehiculo) {
        case 1:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 2;
                    break;
                case 'B':
                    this->tiempo_restante = 2;
                    break;
                case 'C':
                    this->tiempo_restante = 4;
                    break;
                case 'D':
                    this->tiempo_restante = 1;
                    break;
                case 'E':
                    this->tiempo_restante = 3;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
                case 'Z':
                    this->tiempo_restante = NULL;
                    break;
            }
            break;
        case 2:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 1;
                    break;
                case 'B':
                    this->tiempo_restante = 1;
                    break;
                case 'C':
                    this->tiempo_restante = 2;
                    break;
                case 'D':
                    this->tiempo_restante = 3;
                    break;
                case 'E':
                    this->tiempo_restante = 2;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
            }
            break;
        case 3:;
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 3;
                    break;
                case 'B':
                    this->tiempo_restante = 1;
                    break;
                case 'C':
                    this->tiempo_restante = 2;
                    break;
                case 'D':
                    this->tiempo_restante = 1;
                    break;
                case 'E':
                    this->tiempo_restante = 4;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
            }
            break;
        case 4:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 3;
                    break;
                case 'B':
                    this->tiempo_restante = 2;
                    break;
                case 'C':
                    this->tiempo_restante = 1;
                    break;
                case 'D':
                    this->tiempo_restante = 4;
                    break;
                case 'E':
                    this->tiempo_restante = 1;
                    break;
                case 'F':
                    this->tiempo_restante = 2;
                    break;
            }
            break;
        case 5:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 1;
                    break;
                case 'B':
                    this->tiempo_restante = 2;
                    break;
                case 'C':
                    this->tiempo_restante = 4;
                    break;
                case 'D':
                    this->tiempo_restante = 3;
                    break;
                case 'E':
                    this->tiempo_restante = 4;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
            }
            break;
        case 6:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 4;
                    break;
                case 'B':
                    this->tiempo_restante = 4;
                    break;
                case 'C':
                    this->tiempo_restante = 2;
                    break;
                case 'D':
                    this->tiempo_restante = 1;
                    break;
                case 'E':
                    this->tiempo_restante = 3;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
            }
            break;
    }
}

Proceso::Proceso(char tipo, int tipo_vehiculo) {
    this->estado = "Incompleto";
    this->siguiente = NULL;
    this->tipo = tipo;
    this->tiempo_restante = NULL;

    switch (tipo_vehiculo) {
        case 1:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 2;
                    break;
                case 'B':
                    this->tiempo_restante = 2;
                    break;
                case 'C':
                    this->tiempo_restante = 4;
                    break;
                case 'D':
                    this->tiempo_restante = 1;
                    break;
                case 'E':
                    this->tiempo_restante = 3;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
                case 'Z':
                    this->tiempo_restante = NULL;
                    break;
            }
            break;
        case 2:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 1;
                    break;
                case 'B':
                    this->tiempo_restante = 1;
                    break;
                case 'C':
                    this->tiempo_restante = 2;
                    break;
                case 'D':
                    this->tiempo_restante = 3;
                    break;
                case 'E':
                    this->tiempo_restante = 2;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
            }
            break;
        case 3:;
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 3;
                    break;
                case 'B':
                    this->tiempo_restante = 1;
                    break;
                case 'C':
                    this->tiempo_restante = 2;
                    break;
                case 'D':
                    this->tiempo_restante = 1;
                    break;
                case 'E':
                    this->tiempo_restante = 4;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
            }
            break;
        case 4:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 3;
                    break;
                case 'B':
                    this->tiempo_restante = 2;
                    break;
                case 'C':
                    this->tiempo_restante = 1;
                    break;
                case 'D':
                    this->tiempo_restante = 4;
                    break;
                case 'E':
                    this->tiempo_restante = 1;
                    break;
                case 'F':
                    this->tiempo_restante = 2;
                    break;
            }
            break;
        case 5:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 1;
                    break;
                case 'B':
                this->tiempo_restante = 2;
                    break;
                case 'C':
                    this->tiempo_restante = 4;
                    break;
                case 'D':
                    this->tiempo_restante = 3;
                    break;
                case 'E':
                    this->tiempo_restante = 4;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
            }
            break;
        case 6:
            switch (tipo) {
                case 'A':
                    this->tiempo_restante = 4;
                    break;
                case 'B':
                    this->tiempo_restante = 4;
                    break;
                case 'C':
                    this->tiempo_restante = 2;
                    break;
                case 'D':
                    this->tiempo_restante = 1;
                    break;
                case 'E':
                    this->tiempo_restante = 3;
                    break;
                case 'F':
                    this->tiempo_restante = 1;
                    break;
            }
            break;
    }
}