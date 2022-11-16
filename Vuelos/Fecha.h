/*
Francisco Nicolas Jervis A00835131.*/

//Guarda la clase
#ifndef FECHA_H
#define FECHA_H
class Fecha {
public:
    //Constructor default
    Fecha();
    //Constructor con parametros
    Fecha(int, int, int);
    //Metodos getter o de acceso
    int getDia() const;
    int getMes() const;
    int getAnnio() const;
    //Metodos setters o modificadores
    void setDia(int);
    void setMes(int);
    void setAnnio(int);
    //Metodos complementarios
    void imprime();
    int iguales(Fecha);
private:
    int dia;
    int mes;
    int annio;
};
#endif //Se termina la guarda de la clase
