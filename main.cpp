#include <iostream>
#include "LineaProduccion.h"

using namespace std;
int main() {
    Vehiculo* uno = new Vehiculo(3);
    LineaProduccion a;
    a.encolar(uno);
    a.mostrarLineaProduccion();
    return 0;
}