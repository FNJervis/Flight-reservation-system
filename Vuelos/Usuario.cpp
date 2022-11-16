#include "Usuario.h"
#include <iostream>

Usuario::Usuario()
{
	username = "n/a";
	password = "n/a";
}

Usuario::Usuario(string _username, string _password)
{
	username = _username;
	password = _password;
}

string Usuario::getUsername() const
{
	return username;
}

string Usuario::getPassword() const
{
	return password;
}

void Usuario::setUsername(string _username)
{
	username = _username;
}

void Usuario::setPassword(string _password)
{
	password = _password;
}

bool Usuario::iguales(Usuario& u)
{
	if (u.getPassword() == password && u.getUsername() == username) {
		return true;
	}
	else {
		return false;
	}
}

void Usuario::imprimeus()
{
	std::cout << username << password;
}
