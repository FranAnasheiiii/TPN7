#include <iostream>
#include <string>
using namespace std;

class Ccirculo {
private:
    float radio;
    float diametro;

public:
    Ccirculo();
    float pedirradio();
    float pedirdiametro();
};

Ccirculo::Ccirculo() {
    this->radio = 0.0;
    this->diametro = 0.0;
}

float Ccirculo::pedirradio() {
    cout << "Ingrese el radio del c�rculo" << endl;
    cin >> radio;
    return radio;
}

float Ccirculo::pedirdiametro() {
    cout << "Ingrese el di�metro del c�rculo" << endl;
    cin >> diametro;
    return diametro;
}

int main() {
    float radio;
    float diametro;

    Ccirculo formas;

    radio = formas.pedirradio();
    diametro = formas.pedirdiametro();

    cout << "El radio es: " << radio << endl;
    cout << "El di�metro es: " << diametro << endl;

    return 0;
}

