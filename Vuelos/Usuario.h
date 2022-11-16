#include <string>
using std::string;
#ifndef USUARIO_H
#define USUARIO_H
class Usuario
{
private:
	string username;
	string password;
public:
	Usuario();
	Usuario(string, string);
	string getUsername() const;
	string getPassword() const;
	void setUsername(string);
	void setPassword(string);
	bool iguales(Usuario&);
	void imprimeus();

};
#endif

