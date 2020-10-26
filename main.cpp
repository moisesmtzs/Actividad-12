#include <iostream>
#include "arreglo_dinamico.h"

using namespace std;

int main(){

    ArregloDinamico arreglo;
    arreglo.insertar_final("estas");
    arreglo.insertar_final("te");
    arreglo.insertar_final("comento");
    arreglo.insertar_final("que");
    arreglo.insertar_final("tengo");
    arreglo.insertar_final("el");
    arreglo.insertar_final("nombre");
    arreglo.insertar_final("Juan");
    arreglo.insertar_inicio("como");
    arreglo.insertar_inicio("Hola");
    for ( size_t i = 0 ; i < arreglo.size() ; i++){

        cout << arreglo[i] << "  " ;

    }

}
