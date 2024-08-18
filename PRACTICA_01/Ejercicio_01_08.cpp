// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 8
// Problema planteado: Detecte si una letra ingresada el vocal o consonante.

#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    // Verifica si es una letra en minuscula o mayúscula.
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        // Verifica si es una vocal
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
            cout << letra << " es una vocal." << endl;
        } else { //Si no es una vocal,es una consonante
            cout << letra << " es una consonante." << endl;
        }
    } else {//Si no es ni vocal ni consonante, es un caracter especial.
        cout << letra << " es un carácter especial." << endl;
    }

    return 0;
}
