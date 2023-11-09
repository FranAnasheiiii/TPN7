#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
 
using namespace std;
 
class CPersona {
public:
    CPersona(string nombre, string direccion, int edad, int telefono, bool OS, bool alergia, int uvisita);
    CPersona();
    string getnombre();
    string getdireccion();
    int getedad();
    int gettelefono();
    bool getOS();
    bool getalergia();
    int getuvisita();
    
private:
    string nombre;
    string direccion;
    int edad;
    int telefono;
    bool ObraSocial;
    bool alergia;
    int uvisita;
};
 
CPersona::CPersona(string nombre, string direccion, int edad, int telefono, bool OS, bool alergia, int uvisita) {
    this->nombre = nombre;
    this->direccion = direccion;
    this->edad = edad;
    this->telefono = telefono;
    this->ObraSocial = OS;
    this->alergia = alergia;
    this->uvisita = uvisita;
}
 
string CPersona::getnombre() {
    return nombre;
}
 
CPersona::CPersona() {
    // Constructor por defecto
}

string CPersona::getdireccion() {
    return direccion;
}
 
int CPersona::getedad() {
    return edad;
}

int CPersona::gettelefono() {
    return telefono;
}

bool CPersona::getOS() {
    return ObraSocial;
}

bool CPersona::getalergia() {
    return alergia;
}

int CPersona::getuvisita() {
    return uvisita;
}

#endif

