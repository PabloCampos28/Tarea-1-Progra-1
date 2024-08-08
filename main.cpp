#include <iostream>
#include "Header Files/Punto.h"
#include "Header Files/Segmento.h"
#include "Header Files/Recta.h"
using namespace std;

int main() {
    int aux;string auxEti;
    Punto p1;
    Punto p2;
    Segmento s1;
    cout << "Ingrese el nombre del Segmento :"; cin >> auxEti;
    s1.setEtiqueta(auxEti);
    cout<<"Introduce las coordenadas del punto 1"<<endl;
    cout<< "X :"; cin>> aux;
    p1.setX(aux);
    cout<< "Y :"; cin>> aux;
    p1.setY(aux);
    cout<< "Ingrese una etiqueta :"; cin >> auxEti;
    p1.setEtiqueta(auxEti);
    s1.setA(p1);
    cout<<"Introduce las coordenadas del punto 2"<<endl;
    cout<< "X :"; cin>> aux;
    p2.setX(aux);
    cout<< "Y :"; cin>> aux;
    p2.setY(aux);
    cout<< "Ingrese una etiqueta :"; cin >> auxEti;
    p2.setEtiqueta(auxEti);
    s1.setB(p2);
    cout<< endl;
    cout << s1.toString();


    Recta r1(p1,p2,"Recta1");
    Recta r2(25,45,"Recta2");
    cout << r1.toString() << endl;
    if(r1.esParalela(r2)) {
        cout << "Es paralela con la recta" + r2.obtenerEtiqueta() << endl;
    }
    else
        cout << "No es paralela con la recta" + r2.obtenerEtiqueta() << endl;

    if(r1.esPerpendicular(r2)) {
        cout << "Es perpendicular con la recta" + r2.obtenerEtiqueta() << endl;
    }
    else
        cout << "No es perpendicular con la recta" + r2.obtenerEtiqueta() << endl;

    return 0;
};

