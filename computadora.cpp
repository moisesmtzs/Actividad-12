#include "computadora.h"

Computadora::Computadora(){
    
}
Computadora::Computadora( const string &so, int ram, const string &marca, float bateria ){

    this->so      = so;
    this->ram     = ram;
    this->marca   = marca;
    this->bateria = bateria;

}

void Computadora::setSo( const string &s ){
    so = s;
}

string Computadora::getSo(){
    return so;
}
void Computadora::setRam( int s ){
    ram = s;
}

int Computadora::getRam(){
    return ram;
}
void Computadora::setMarca( const string &s ){
    marca = s;
}

string Computadora::getMarca(){
    return marca;
}
void Computadora::setBateria( float s ){
    bateria = s;
}

float Computadora::getBateria(){
    return bateria;
}
