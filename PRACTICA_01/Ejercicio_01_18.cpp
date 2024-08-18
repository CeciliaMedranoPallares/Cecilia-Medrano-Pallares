// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 18
// Problema planteado:  Calcular si un número dado es un número de Armstrong .
#include <iostream>
using namespace std;

int main() {
    int numero;
    int original, digito, suma = 0, numDigitos = 0;
    int potencia, i;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    original = numero;

    // Contar el número de dígitos
    int temp = numero;
    while (temp > 0) {
        temp /= 10;
        numDigitos++;
    }

    // Calcular la suma de los dígitos elevados a la potencia del número de dígitos
    temp = original;
    while (temp > 0) {
        digito = temp % 10;
        // Calcular la potencia del dígito
        potencia = 1;
        for (i = 0; i < numDigitos; i++) {
            potencia *= digito;
        }
        suma += potencia;
        temp /= 10;
    }

    // Comparar la suma con el número original
    if (suma == original) {
        cout << numero << " es un número de Armstrong." << endl;
    } else {
        cout << numero << " no es un número de Armstrong." << endl;
    }

    return 0;
}
