#include "Pasajero.h"
#include <iostream>
Pasajero::Pasajero()
{
    nombre = "n/a";
    millas = 0;

}

Pasajero::Pasajero(string _nombre, int _millas)
{
    nombre = _nombre;
    millas = _millas;

}

string Pasajero::getNombre() const
{
    return nombre;
}

int Pasajero::getMillas() const
{
    return millas;
}



void Pasajero::setNombre(string _nombre)
{
    nombre = _nombre;
}

void Pasajero::setmillas(int _millas)
{
    millas = _millas;
}


void Pasajero::imprimir()
{
    std::cout << "Nombre: " << nombre << "\nMillas: " << millas<<std::endl;
}
