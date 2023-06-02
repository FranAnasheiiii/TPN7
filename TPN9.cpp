#include <iostream>
#include <string>
#include <algorithm>

int CambiarDictado(const std::string& frase) {
    std::string frase_reversa = frase;
    std::reverse(frase_reversa.begin(), frase_reversa.end());

    int letras_faltantes = 0;
    int tamano_frase = frase.length();

    for (int i = 0; i < tamano_frase; i++) {
        if (frase[i] != frase_reversa[i]) {
            letras_faltantes++;
        }
    }

    return letras_faltantes;
}

int main() {
    std::string frase;
    std::cout << "Ingrese una frase: ";
    std::getline(std::cin, frase);

    int letras_faltantes = CambiarDictado(frase);
    std::cout << "Cantidad de letras faltantes para hacerla palindroma: " << letras_faltantes << std::endl;

    return 0;
}

