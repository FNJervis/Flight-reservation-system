//Francisco Jervis A00835131
#include "Vuelo.h"
#include <iostream>
#include <fstream>
using namespace std;

void llenaVuelos(vector <Vuelo>& lista) {
	int num, d, m, a;
	double pre;
	string dest;
	string aer;
	double dur;
	ifstream archivo;
	archivo.open("Vuelos.txt");
	while (archivo >> d >> m >> a >> num >> pre >> dest >> aer >> dur) {
		Fecha f(d, m, a);
		Vuelo v(f, num, pre, dest, aer, dur);
		lista.push_back(v);
	};
}
void llenaUsuarios(vector <Usuario>& lista) {
	string un, psw;
	ifstream archivo;
	archivo.open("Usuarios.txt");
	while (archivo >> un>>psw) {
		Usuario u(un, psw);
		lista.push_back(u);
	};
}
bool validacionUsuario(vector <Usuario> usuarios, Usuario& usuario) {
	for (int i = 0; i < usuarios.size(); i++) {
		if (usuario.iguales(usuarios[i]) == true) {
			return true;
		}
		else {
			return false;
		}
	}
}
void imprimeVuelos(vector <Vuelo> vuelos) {
	for (int i = 0; i < vuelos.size(); i++) {
		vuelos[i].imprimev();
	}
}



int main()
{
	vector <Usuario> usuarios;
	vector <Vuelo> vuelos;
	char opc2;
	string un, psw, aereol;
	int d, m, a, opc=2, opc1;

	llenaVuelos(vuelos);
	llenaUsuarios(usuarios);

	cout << "\tSistema de reservas VolandoAndo" << endl;

	while (opc==1)
	{
		cout << "1: LogIn\n2: Crear usuario" << endl;
		cin >> opc1;
		if (opc1 == 2) {
			cout << "....................." << endl;
			cout << "Crea un nuevo usuario" << endl;
			cout << "Username: " << endl;
			cin >> un;
			cout << "Password: " << endl;
			cin >> psw;
			Usuario usuario(un, psw);
			usuarios.push_back(usuario);
		}
		if (opc1 == 1) {
			cout << "Username: " << endl;
			cin >> un;
			cout << "Password: " << endl;
			cin >> psw;
			Usuario usuario(un, psw);
			if (validacionUsuario(usuarios, usuario) == true) {
				opc=2;
			}
			else {
				cout << "Usuario y/o Contraseña incorrectas" << endl;
				
			}

		}
	}
	do
	{
		cout << "-----------------" << endl;
		cout << "\tMenu\n" << endl;
		cout << "1. Desplegar todos los vuelos \n2. Desplegar vuelos de una determinada Fecha \n3. Desplegar vuelos de una determinada aerolinea \n4. Desplegar vuelos de un precio máximo \n5. Salir \n";
		cin >> opc2;
		cout << "-----------------" << endl;
		switch (opc2)
		{
		case '1':
		{
			imprimeVuelos(vuelos);
			break;
		}
		case '2':
		{
			cout << "Introduce la fecha para buscar vuelos separada por espacios (dd mm aa)" << endl;
			cin >> d >> m >> a;
			Fecha fb(d, m, a);
			for (int i = 0; i < vuelos.size(); i++) {
				if (vuelos[i].buscaVueloF(fb) == true) {

					vuelos[i].imprimev();
				}
			}
			break;
		}
		case'3':
		{
			cout << "Introduce la aereolinea a buscar: " << endl;
			cin >> aereol;
			for (int i = 0; i < vuelos.size(); i++) {
				if (vuelos[i].buscaVueloA(aereol) == true) {

					vuelos[i].imprimev();
				}
				
			}
			break;
		}
		case '4':
		{
			double prec;
			cout << "Introduce el precio maximo a buscar: " << endl;
			cin >> prec;
			for (int i = 0; i < vuelos.size(); i++) {
				if (vuelos[i].buscaVuelop(prec) == true) {

					vuelos[i].imprimev();
				}
			}
			break;
		}
		case '5':
		{
			cout << "¡Adiós!" << endl;
			break;
		}
		default:
			cout << "\tOpcion invalida\n";
			break;	
		}
	}
	while (opc2 != '5');


		};