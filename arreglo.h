#ifndef ARREGLO_H
#define ARREGLO_H
#include <iostream>
#include <iomanip>

using namespace std;

template <class T>
class Arreglo{

    T *arreglo;
    size_t cont;
    size_t tam;
    const static size_t MAX = 5;

public:
    Arreglo();
    ~Arreglo();
    void insertar_inicio( const T& s );
    void insertar_final( const T& s );
    void insertar( const T& s, size_t t );
    
    void eliminar_inicio();
    void eliminar_final();
    void eliminar( size_t t );
    void mostrar( );

    T* buscar( const T& s );
    Arreglo<T*> buscar_todos( const T& s );

    size_t size();
    T operator[]( size_t p ){
        return arreglo[p];
    }

    friend Arreglo<T>& operator<<( Arreglo<T> &o, const T& s ){

        o.insertar_final(s);
        return o;
    }


private:
    void expandir();

};

template <class T>
Arreglo<T>::Arreglo(){

    arreglo = new T[MAX];
    cont = 0;
    tam = MAX;

}

template <class T>
Arreglo<T>::~Arreglo(){

    delete[] arreglo;

}

template <class T>
void Arreglo<T>::insertar_inicio( const T& s ){

    if ( cont == tam ){
        expandir();
    }
    for ( size_t i = cont ; i > 0 ; i-- ){

        arreglo[i] = arreglo[i-1];

    }
    arreglo[0] = s;
    cont++;

}

template <class T>
void Arreglo<T>::insertar_final( const T& s ){

    if ( cont == tam ){
        expandir();
    }
    arreglo[cont] = s;
    cont++;

}

template <class T>
void Arreglo<T>::insertar( const T& s, size_t t ){

    if ( t >= cont ){
        cout << "Esa posición no existe" << endl;
        return;
    }
    if ( cont == tam ){
        expandir();
    }
    for ( size_t i = cont ; i > t ; i-- ){
        arreglo[i] = arreglo [i-1];
    }
    arreglo[t] = s;
    cont++;

}

template <class T>
void Arreglo<T>::eliminar_inicio(){

    if ( cont == 0 ){
        cout << "Arreglo vacío" << endl;
        return;
    }
    for ( size_t i = 0 ; i < cont-1 ; i++ ){
        arreglo[i] = arreglo[i+1];
    }
    cont--;

}

template <class T>
void Arreglo<T>::eliminar_final(){

    if ( cont == 0 ){
        cout << "Arreglo vacío" << endl;
        return;
    }
    cont--;
}

template <class T>
void Arreglo<T>::eliminar( size_t t ){

    if ( cont == 0 ){
        cout << "Arreglo vacío" << endl;
        return;
    }
    for ( size_t i = t ; i < cont-1 ; i++ ){

        arreglo[i] = arreglo[i+1];

    }
    cont--;

}

template <class T>
size_t Arreglo<T>::size(){
    return cont; 
}

template <class T>
void Arreglo<T>::expandir(){
    
    T *nuevo = new T[tam+MAX];
    for ( size_t i = 0 ; i < cont ; i++ ){

        nuevo[i] = arreglo[i];

    }
    delete[] arreglo;
    arreglo = nuevo;
    tam += MAX;

}

template<class T>
void Arreglo<T>::mostrar(){
    
    for ( size_t i = 0 ; i < cont ; i++ ){

        Computadora &c = arreglo[i];
        cout << c;
        cout<<endl;

    }
}

template<class T>
T* Arreglo<T>::buscar( const T& s ){

    for ( size_t i = 0 ; i < cont ; i++ ){

        if ( s == arreglo[i] ){
            return &arreglo[i];
        }

    }
    return nullptr;

}

template<class T>
Arreglo<T*> Arreglo<T>::buscar_todos( const T& s ){

    Arreglo<T*> ptrs;

    for ( size_t i = 0 ; i < cont ; i++ ){

        if ( s == arreglo[i] ){

            ptrs.insertar_final( &arreglo[i] );

        }
        
    }
    return ptrs;
}



#endif