#include <iostream>
#include <string>
using namespace std;

class Cpersona {
private:
    int Edad;
    float altura;
    string nombre;

public:
    Cpersona(int Edad, float altura, string nombre);
    int pediredad();
    float pediraltura();
    string pedirnombre();
};

Cpersona::Cpersona(int Edad, float altura, string nombre) {
    this->Edad = Edad;
    this->altura = altura;
    this->nombre = nombre;
}

int Cpersona::pediredad() {
    cout << "Ingrese su Edad" << endl;
    cin >> Edad;
    return Edad;
}

float Cpersona::pediraltura() {
    cout << "Ingrese su altura" << endl;
    cin >> altura;
    return altura;
}

string Cpersona::pedirnombre() {
    cout << "Ingrese su nombre" << endl;
    cin >> nombre;
    return nombre;
}

int main() {
    int Edad;
    float altura;
    string nombre;

    Cpersona formas(Edad, altura, nombre);

    cout << "El nombre ingresado: " << formas.pedirnombre() << endl;
    cout << "La altura ingresada: " << formas.pediraltura() << endl;
    cout << "La edad ingresada: " << formas.pediredad() << endl;

    return 0;
}

