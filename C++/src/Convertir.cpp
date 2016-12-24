#include "Convertir.h"

Convertir::Convertir()
{
    velocidad = 0;
}

Convertir::~Convertir()
{
    //dtor
}

//Implementacion del metodo para convertir km/h a m/s
float Convertir::metrosPorSegundo()
{
    //la formula es muy sencilla se debe multiplicar la velocidad por 1000 (1km = 1000m),
    //luego se divide el resultado entre 3600 (1h = 3600s).
    return (velocidad * 1000) / 3600;
}

//Implementacion de los metodos Setters y Getters
void Convertir::setVelocidad(float n)
{
    velocidad = n;
}

float Convertir::getVelocidad()
{
    return velocidad;
}
