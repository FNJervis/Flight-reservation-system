#include "Vuelo.h"
#include <iostream>
#include <string>
using namespace std;
Vuelo::Vuelo()
{
    numVuelo = 0;
    precio = 0;
    destino = "n/a";
    aereolinea = "n/a";
    duracion = 0;

}

Vuelo::Vuelo(Fecha& _fecha, int _numVuelo, double _precio, string _destino, string _aerolinea, double _duracion)
{
    fecha = _fecha;
    numVuelo = _numVuelo;
    precio = _precio;
    destino = _destino;
    aereolinea = _aerolinea;
    duracion = _duracion;
}


Fecha Vuelo::getFecha() const
{
    return fecha;
}

int Vuelo::getNumVuelo() const
{
    return numVuelo;
}

double Vuelo::getPrecio() const
{
    return precio;
}

string Vuelo::getDestino() const
{
    return destino;
}

string Vuelo::getAereolinea() const
{
    return aereolinea;
}

double Vuelo::getDuracion() const
{
    return duracion;
}

void Vuelo::setFecha(Fecha& _fecha)
{
    fecha = _fecha;
}

void Vuelo::setNumVuelo(int _numVuelo)
{
    numVuelo = _numVuelo;
}

void Vuelo::setPrecio(double _precio)
{
    precio = _precio;
}

void Vuelo::setDestino(string _destino)
{
    destino = _destino;
}

void Vuelo::setAereolina(string _aereolinea)
{
    aereolinea = _aereolinea;
}

void Vuelo::setDuracion (double _duracion)
{
    duracion = _duracion;
}

void Vuelo::agregarPasajero(Pasajero& _pasajero)
{
    pasajeros.push_back(_pasajero);
}

void Vuelo::quitarPasajero(int pos)
{
    pasajeros.erase(pasajeros.begin() + (pos + 1));
}

void Vuelo::imprimev()
{
    cout << "........................."<<endl;
    cout << "Fecha del vuelo: ";
    fecha.imprime();
    cout << "\nNúmero de Vuelo: " << numVuelo << "\nPrecio: " << precio << "$\nDestino: " << destino << "\nAereolinea: " << aereolinea << "\nDuración: " << duracion << " Hr"<<endl;
    cout << "........................." << endl;
}

bool Vuelo::buscaVueloF(Fecha f)
{
    if (fecha.iguales(f) == 1) {
        return true;
    }
    else {
        return false;
    }
}

bool Vuelo::buscaVueloA(string a)
{
    if (aereolinea == a) {
        return true;
    }
    else {
    return false;
}
}

bool Vuelo::buscaVuelop(double p)
{
    if (precio <= p) {
        return true;
    }
    else {
        return false;
    }
}




