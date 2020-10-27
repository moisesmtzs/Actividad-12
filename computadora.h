#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <iomanip>

using namespace std;

class Computadora{

    string so;


public:
    Computadora();
    Computadora( const string &so );
    void setSo( const string &s );
    string getSo();


    friend ostream& operator<<( ostream &o, const Computadora &c ){

        o << left;
        o << setw(10) << c.so;

        o << endl;
        return o;
    }

    friend istream& operator>>( istream &i, Computadora &c ){

        cout << "Sistema Operativo: ";
        getline(cin,c.so);

        return i;
    }
    
};

#endif