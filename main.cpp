#include <iostream>
#include "computadora.h"
#include "arreglo.h"

using namespace std;

int main(){


    Arreglo<Computadora> arreglo;
    Computadora c01 = Computadora( "Windows" );
    Computadora c02 = Computadora( "macOS" );
    Computadora c03 = Computadora( "Windows" );
    Computadora c04 = Computadora( "Linux" );
    Computadora c05 = Computadora( "Linux" );
    
    arreglo.insertar_inicio(c03);
    
    for ( size_t i = 0 ; i < 4 ; i++ ){
        arreglo.insertar_final(arreglo[i]);
    }
    arreglo.mostrar();
    system("pause");
    arreglo.insertar( c05, 2 );
    system("pause");
    arreglo.eliminar_inicio();
    arreglo.mostrar();
    system("pause");
    arreglo.eliminar_final();
    arreglo.mostrar();
    system("pause");
    arreglo.eliminar(0);
    arreglo.mostrar();
    system("pause");

}
