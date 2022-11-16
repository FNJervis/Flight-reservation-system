#ifndef PASAJERO_H
#define PASAJERO_H
#include "Usuario.h"
#include <string>
using std::string;
class Pasajero
{
private:
	string nombre;
	int millas;
public:
	Pasajero();
	Pasajero(string, int);
	string getNombre() const;
	int getMillas() const;
	void setNombre(string);
	void setmillas(int);
	void imprimir();
};
#endif
