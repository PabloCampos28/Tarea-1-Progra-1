//
// Created by Steven on 7/24/2024.
//
#include "Header Files/Recta.h"

Recta::Recta() {
    m = 0;
    b = 0;
    etiqueta = " ";
}
Recta::Recta(double m,double b, string etiqueta) {
    this->m = m;
    this->b = b;
    this->etiqueta = etiqueta;
}
Recta::Recta(Segmento otro, string etiqueta) {
    calcularByM(otro.getA(),otro.getB());
    this->etiqueta = etiqueta;
}
Recta::Recta(Punto a,Punto b,string etiqueta) {
    calcularByM(a,b);
    this->etiqueta = etiqueta;
}
double Recta::obtenerPendiente() {
    return m;
}
double Recta::obtenerInterseccion() {
    return b;
}
void Recta::calcularByM(Punto a, Punto b) {
    this->m = (a.getY()-b.getY())/(a.getX()-b.getX());
    this->b = a.getY()-(a.getX()*m);
}
string Recta::obtenerEtiqueta() {
    return etiqueta;
}
string Recta::obtenerTipo() {
    if(m>0) {
        return "Creciente";
    }
    else
        if(m<0) {
            return "Decreciente";
        }
        else
            return"No tiene inclinacion";
}
bool Recta::esParalela(Recta aux) {
    if(m == aux.obtenerPendiente()) {
        return true;
    }
    else
        return false;
}
bool Recta::esPerpendicular(Recta aux) {
    if(m*aux.obtenerPendiente() == -1) {
        return true;
    }
    else
        return false;
}
double Recta::solucionEcuacion(double x) {
    return (m*x)+b;
}
string Recta::toString() {
    stringstream s;
    s<< "Etiqueta : " << etiqueta << endl;
    s<< "Ecuacion :" <<  "y = " << m << "x +" << b << endl;
    s << "Es de tipo :" + obtenerTipo() << endl;
    return s.str();
}



