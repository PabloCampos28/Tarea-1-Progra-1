//
// Created by Steven on 7/22/2024.
//

#ifndef PUNTO_H
#define PUNTO_H
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

class Punto{
private:
    double x;
    double y;
    string etiqueta;
public:
    Punto();
    Punto(double , double , string );
    void setX(double );
    void setY(double );
    double getX();
    double getY();
    void setEtiqueta(string );
    string getEtiqueta();
    string toString();
    double distanciaEntre(Punto );
};
#endif //PUNTO_H
