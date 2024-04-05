#include <iostream>
#include "headerFuturo.h"
using namespace std;

int main() {
    string nombre;
    int edad;

    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Ingrese su edad: ";
    cin >> edad;

    string resultado = adivinar_personalidad(nombre, edad);
    cout << "Estimado " << resultado << endl;

    return 0;
}
