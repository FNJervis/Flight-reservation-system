/*Francisco Nicolas Jervis A00835131.*/
#include<iostream>
#include "Fecha.h"

Fecha::Fecha() {
    dia = 01;
    mes = 01;
    annio = 1900;
}

Fecha::Fecha(int _dia, int _mes, int _annio) {
    setDia(_dia);
    setMes(_mes);
    setAnnio(_annio);
}

int Fecha::getDia() const {
    return dia;
}
int Fecha::getMes() const {
    return mes;
}
int Fecha::getAnnio() const {
    return annio;
}

void Fecha::setDia(int _dia) {
    if (_dia <= 31) {
        dia = _dia;
    }
    else {
        dia = 01;
    }
}
void Fecha::setMes(int _mes) {
    if (_mes <= 12) {
        mes = _mes;
    }
    else {
        mes = 01;
    }
}
void Fecha::setAnnio(int _annio) {
    annio = _annio;
}
void Fecha::imprime() {
    std::cout << dia << "/" << mes << "/" << annio << std::endl;
}
int Fecha::iguales(Fecha f) {
    if (f.getDia() == dia && f.getMes() == mes && f.getAnnio() == annio) {
        return 1;
    }
    else {
        return 0;
    }
}

