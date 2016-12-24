#include <iostream>
#include "Convertir.h"

using namespace std;

int main()
{
    //Se crea un objeto de la clase Convertir (Instanciaciación)
    Convertir* obj = new Convertir();
    //se define una variable de tipo float llamada "v"
    float v;
    //se pide la velocidad en km/h
    cout << "Digite velocidad (km/h):" << endl;
    cin >> v;//se guarda la velocidad digitada por el usuario en la variable "v"
    obj->setVelocidad(v);//se llama al metodo modificador setVelocidad y se le asigna como parametro "v"
    //se muestra en pantalla la conversion de km/h a m/s
    cout << obj->getVelocidad() << "km/h = " << obj->metrosPorSegundo() << "m/s" << endl;
    return 0;
}
