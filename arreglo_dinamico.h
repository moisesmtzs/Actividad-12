#ifndef ARREGLO_DINAMICO_H
#define ARREGLO_DINAMICO_H
#include <iostream>
#include <string>

using namespace std;

class ArregloDinamico{

    string *arreglo;
    size_t cont;
    size_t tam;
    const static size_t MAX = 5;

public:
    ArregloDinamico();
    ~ArregloDinamico();
    void insertar_inicio( const string &s );
    void insertar_final( const string &s );
    size_t size();
    string operator[]( size_t p ){
        return arreglo[p];
    }
private:
    void expandir();

};

#endif