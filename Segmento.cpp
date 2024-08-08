//
// Created by Steven on 7/23/2024.
//
#include "Header Files/Segmento.h"

Segmento::Segmento() {
    etiqueta = " ";
}
Segmento::Segmento(Punto otroA,Punto otroB,string otraEtiqueta) {
    this->a = otroA;
    this->b = otroB;
    this->etiqueta = otraEtiqueta;
}
void Segmento::setA(Punto a) {
    this-> a = a;
}
Punto Segmento::getA() {
    return a;
}
void Segmento::setB(Punto b) {
    this-> b = b;
}
Punto Segmento::getB() {
    return b;
}
void Segmento::setEtiqueta(string etiqueta) {
    this->etiqueta = etiqueta;
}
string Segmento::getEtiqueta() {
    return etiqueta;
}
double Segmento::longitud() {
    return a.distanciaEntre(b);
}
Punto Segmento::puntoMedio() {
    Punto aux;
    aux.setX((a.getX()+b.getX())/2);
    aux.setY((a.getY()+b.getY())/2);
    aux.setEtiqueta("Punto medio de " + etiqueta);
    return aux;
}
string Segmento::toString() {
    stringstream s;
    s << "Etiqueta de Segmento :" << etiqueta << endl;
    s << a.toString() << endl;
    s << b.toString() << endl;
    s << puntoMedio().toString() << endl;
    s << "La longitud del segmento es : " << longitud() << endl;
    return s.str();
}


