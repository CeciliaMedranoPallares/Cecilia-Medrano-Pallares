// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 10
// Problema planteado: Cantidad de dígitos que tiene un número entero.

#include <iostream>
using namespace std;

int main() {
    int numero;
    int contador = 0;
    int numeroOriginal; // Variable para almacenar el valor original

    cout << "Ingrese el número del cual desea saber sus dígitos: ";
    cin >> numero;

    numeroOriginal = numero; // Guardar el valor original

    if (numero == 0) {
        cout << "El número 0 tiene 1 dígito." << endl;
    } else {
        if (numero < 0) {// Usar el valor absoluto para manejar números negativos
            numero = -numero;
        }
        while (numero > 0) { // Contar los dígitos
            numero = numero / 10;
            contador++;
        }

        cout << "El número " << numeroOriginal << " tiene " << contador << " dígitos.";
    }

    return 0;
}
