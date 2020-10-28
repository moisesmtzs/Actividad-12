#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip>

using namespace std;

class Computadora{

    string so;
    int ram;
    string marca;
    float bateria;

public:
    Computadora();
    Computadora( const string &so, int ram, const string &marca, float bateria );
    void setSo( const string &s );
    string getSo();
    void setRam( int s );
    int getRam();
    void setMarca( const string &s );
    string getMarca();
    void setBateria( float s );
    float getBateria();

    friend ostream& operator<<( ostream &o, const Computadora &c ){

        o << left;
        o << setw(10) << c.so;
        o << setw(10) << c.ram;
        o << setw(10) << c.marca;
        o << setw(10) << c.bateria;
        o << endl;
        return o;
    }

    friend istream& operator>>( istream &i, Computadora &c ){

        cout << "Sistema Operativo: ";
        getline(cin,c.so);
        cout << "RAM: ";
        cin >> c.ram;
        cin.ignore();
        cout << "Marca: ";
        getline(cin,c.marca);
        cout << "Bateria: ";
        cin >> c.bateria;
        cin.ignore();

        return i;
    }

    bool operator==( const Computadora& c ){

        return so == c.so;
    }
    bool operator==( const Computadora& c ) const {

        return so == c.so;

    } 

    
};

#endif