#include "Header Files/Punto.h"

Punto::Punto(){
    x=0;
    y=0;
    etiqueta = " ";
}
Punto :: Punto(double x, double y, string etiqueta){
    this->x = x;
    this->y = y;
    this->etiqueta = etiqueta;
}
void Punto::setX(double x){
    this->x = x;
}
void Punto::setY(double y){
    this->y = y;
}
double Punto::getX(){
    return x;
}
double Punto::getY(){
    return y;
}
string Punto::getEtiqueta(){
    return etiqueta;
}
void Punto::setEtiqueta(string etiqueta){
    this->etiqueta = etiqueta;
}
string Punto::toString(){
    stringstream s;
    s << "Etiqueta: " << etiqueta << endl;
    s << "Punto :" << "(" << x << "," << y << ")" << endl;
    return s.str();
}
double Punto::distanciaEntre(Punto otro){
    return sqrt(((otro.getX()- x)*(otro.getX()- x))+((otro.getY()- y)*(otro.getY()- y)));
}//
// Created by Steven on 7/22/2024.
//
