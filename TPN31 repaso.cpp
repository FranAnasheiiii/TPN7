#include <iostream>
#include <string>
using namespace std;

class Cestudiante {
private:
    int Edad;
    float calificacion;
    string nombre;

public:
    Cestudiante(int Edad, float calificacion, string nombre);
    int pediredad();
    float pedircalificacion();
    string pedirnombre();
};

Cestudiante::Cestudiante(int Edad, float calificacion, string nombre) {
    this->Edad = Edad;
    this->calificacion = calificacion;
    this->nombre = nombre;
}

int Cestudiante::pediredad() {
    cout << "Ingrese su Edad" << endl;
    cin >> Edad;
    return Edad;
}

float Cestudiante::pedircalificacion() {
    cout << "Ingrese su calificacion" << endl;
    cin >> calificacion;
    return calificacion;
}

string Cestudiante::pedirnombre() {
    cout << "Ingrese su nombre" << endl;
    cin >> nombre;
    return nombre;
}

int main() {
    int Edad;
    float calificacion;
    string nombre;

    Cestudiante formas(Edad, calificacion, nombre);

    nombre = formas.pedirnombre();
    calificacion = formas.pedircalificacion();
    Edad = formas.pediredad();

    cout << "El nombre ingresado: " << nombre << endl;
    cout << "La calificación ingresada: " << calificacion << endl;
    cout << "La edad ingresada: " << Edad << endl;

    return 0;
}

