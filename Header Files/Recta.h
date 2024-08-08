//
// Created by Steven on 7/24/2024.
//

#ifndef RECTA_H
#define RECTA_H
#include <iostream>
#include <sstream>
#include <cmath>
#include "Punto.h"
#include "Segmento.h"

class Recta {
private:
    double m;
    double b;
    string etiqueta;
public:
    Recta();
    Recta(Segmento ,string );
    Recta(double ,double, string);
    Recta(Punto,Punto, string);
    bool esParalela(Recta );
    bool esPerpendicular(Recta );
    double obtenerPendiente();
    double obtenerInterseccion();
    void calcularByM(Punto, Punto);
    string obtenerEtiqueta();
    string obtenerTipo();
    double solucionEcuacion(double );
    string toString();
};
#endif //RECTA_H
