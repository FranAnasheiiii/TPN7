#include <iostream>
#include "Cpersona.h" 

using namespace std;

void desplegarDatos(CPersona *arreglo){

    cout << "\n\nDesplegando datos de las personas\n\n";

    for(int i = 0; i < 3; i++){  

        cout << "\nNombre: " << arreglo[i].getnombre();
        cout << "\nDireccion: " << arreglo[i].getdireccion();
        cout << "\nEdad: " << arreglo[i].getedad();
        cout << "\nTelefono: " << arreglo[i].gettelefono();  
        cout << "\nObra Social: " << (arreglo[i].getOS() ? "Sí" : "No");  
        cout << "\nAlergia: " << (arreglo[i].getalergia() ? "Sí" : "No"); 
        cout << "\nUltima visita: " << arreglo[i].getuvisita();
        cout << "\n";

    }

}

int main() {

    cout << "Creando un arreglo de 3 personas\n";

    CPersona *personas = new CPersona[3];

    personas[0] = CPersona("Rodrigo", "132-K", 23, 5492235274634, false, false, 2021);
    personas[1] = CPersona("Francisco", "342-L", 20, 5492234567458, true, true, 2022);
    personas[2] = CPersona("Rafael", "142-W", 24, 5492234782159, false, true, 2017);

    desplegarDatos(personas);

    delete[] personas;  

    return 0;
}

