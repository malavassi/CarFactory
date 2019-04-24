#include <iostream>
#include "LineaProduccion.h"
#include "Pruebas.h"
#include "Cola.h"

using namespace std;
int main() {
   Pruebas *a = new Pruebas();
   Cola b;
    a->inicializar(a->crearEspacio(1,1,1,1,1,1),b);
    b.mostrarCola();
    return 0;
}