#include "computadora.h"

Computadora::Computadora(){
    
}
Computadora::Computadora( const string &so ){

    this->so      = so;

}

void Computadora::setSo( const string &s ){
    so = s;
}

string Computadora::getSo(){
    return so;
}
