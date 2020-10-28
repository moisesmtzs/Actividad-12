#include <iostream>
#include "computadora.h"
#include "arreglo.h"

using namespace std;

int main(){

    Arreglo<Computadora> arreglo;
    Computadora c01 = Computadora( "Windows",16,"Toshiba", 4900 );
    Computadora c02 = Computadora( "macOS",8,"Apple",3175 );
    Computadora c03 = Computadora( "macOS",32,"Apple", 5150 );
    Computadora c04( "macOS",10,"Apple", 4215 );
    Computadora c05 = Computadora( "Linux",4,"Lenovo",3750 );
    
    arreglo << c01 << c02 << c03 << c04 << c05 << c01;

    Computadora *ptr = arreglo.buscar(c03);

    if ( ptr != nullptr ){
        cout << *ptr << "  <------------------------------->  Resultado de arreglo.buscar" << endl << endl;
    } else {
        cout << "No existe" << endl;
    }

    Arreglo<Computadora*> ptrs = arreglo.buscar_todos(c05);

    if( ptrs.size() > 0 ){
        for (size_t i = 0 ; i < ptrs.size() ; i++){
            Computadora *c = ptrs[i];
            cout << *c << endl;
        }
    } else {
        cout << "No existen coincidencias" << endl;
    }


    /*arreglo.insertar_inicio(c03);
    
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
    system("pause");*/

}
