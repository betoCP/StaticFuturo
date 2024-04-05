#include "headerFuturo.h"
using namespace std;
string adivinar_personalidad(const string& nombre, int edad) {
    if (edad < 18) {
        return nombre + ", tienes una personalidad joven y enérgica.";
    }
    else if (edad >= 18 && edad < 30) {
        return nombre + ", tienes una personalidad madura y ambiciosa.";
    }
    else {
        return nombre + ", tienes una personalidad experimentada y sabia.";
    }
}
