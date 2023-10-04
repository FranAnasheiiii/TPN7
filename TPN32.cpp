#include<iostream>
using namespace std;

class Ccirculo {
private:
    float radio;
    float diametro;
    float superficie;
    float perimetro;

public:
    Ccirculo();
    float pedirradio();
    float pedirdiametro();
    float supcirculo();
    float perimcirculo();
};

Ccirculo::Ccirculo() {
    // Inicializa las variables a 0 en el constructor por defecto
    radio = 0;
    diametro = 0;
    superficie = 0;
    perimetro = 0;
}

float Ccirculo::pedirradio() {
    cout << "Ingrese el radio del circulo" << endl;
    cin >> radio;
    return radio;
}

float Ccirculo::pedirdiametro() {
    cout << "Ingrese el diametro del circulo" << endl;
    cin >> diametro;
    return diametro;
}

float Ccirculo::supcirculo() {
    superficie = radio * radio * 3.14;
    return superficie;
}

float Ccirculo::perimcirculo() {
    perimetro = diametro * 3.14;
    return perimetro;
}

int main() {
    Ccirculo formas;
    float radio, diametro, superficie, perimetro;

    radio = formas.pedirradio();
    diametro = formas.pedirdiametro();
    superficie = formas.supcirculo();
    perimetro = formas.perimcirculo();

    cout << "El radio es: " << radio << endl;
    cout << "El diametro es: " << diametro << endl;

    cout << "La superficie es: " << superficie << endl;
    cout << "El perimetro es: " << perimetro << endl;

    return 0;
}


