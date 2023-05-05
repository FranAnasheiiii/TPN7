#include<bits/stdc++.h>

using namespace std;

int ContarLetraA(string f) {
    int contador = 0;
    for (int i = 0; i < f.length(); i++) {
        if (f[i] == 'a' || f[i] == 'e' || f[i] == 'i' || f[i] == 'o' || f[i] == 'u' || f[i] == 'A' || f[i] == 'E' || f[i] == 'I' || f[i] == 'O' || f[i] == 'U') {
            contador++;
        }
    }
    return contador;
}

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    int cantidadVocales = ContarLetraA(frase);
    cout << "La cantidad de vocales en la frase es: " << cantidadVocales << endl;
    return 0;
}

