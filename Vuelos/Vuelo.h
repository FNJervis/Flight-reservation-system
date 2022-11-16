#ifndef VUELO_H
#define VUELO_H
#include "Fecha.h"
#include "Pasajero.h"
#include <string>
#include <vector>
using std::string;
class Vuelo
{
private:
	Fecha fecha;
	int numVuelo;
	double precio;
	string destino;
	string aereolinea;
	double duracion;
	std::vector<Pasajero> pasajeros;
public:
	Vuelo();
	Vuelo(Fecha&, int, double, string, string, double);
	Fecha getFecha() const;
	int getNumVuelo() const;
	double getPrecio() const;
	string getDestino() const;
	string getAereolinea() const;
	double getDuracion() const;
	void setFecha(Fecha&);
	void setNumVuelo(int);
	void setPrecio(double);
	void setDestino(string);
	void setAereolina(string);
	void setDuracion(double);
	void agregarPasajero(Pasajero&);
	void quitarPasajero(int);
	void imprimev();
	bool buscaVueloF(Fecha);
	bool buscaVueloA(string);
	bool buscaVuelop(double);
};
#endif

