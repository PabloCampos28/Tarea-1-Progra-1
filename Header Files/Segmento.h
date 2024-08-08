//
// Created by Steven on 7/23/2024.
//

#ifndef SEGMENTO_H
#define SEGMENTO_H
#include <iostream>
#include <sstream>
#include <cmath>
#include "Punto.h"
using namespace std;

class Segmento {
private:
    Punto a;
    Punto b;
    string etiqueta;
public:
    Segmento( );
    Segmento(Punto  , Punto , string );
    void setA(Punto );
    Punto getA( );
    void setB(Punto );
    Punto getB( );
    void setEtiqueta(string );
    string getEtiqueta( );
    double longitud();
    Punto puntoMedio();
    string toString();
};
#endif //SEGMENTO_H
