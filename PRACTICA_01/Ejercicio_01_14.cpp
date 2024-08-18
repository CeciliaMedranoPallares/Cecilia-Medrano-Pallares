// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 14
// Problema planteado: Crea un programa para obtener el factorial de un número entero sin emplear el producto.

#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número : ";
    cin >> numero;
    int factorial = 1; 

    // Calcular el factorial
    for (int i = 2; i <= numero; ++i) {
        int acumulador = 0; // Acumulador de la suma sucesiva
        for (int j = 0; j < factorial; ++j) {
            acumulador += i; // Acumulador dentro de cada suma
        }
        factorial = acumulador; 
    }

    cout << "El factorial de " << numero << " es: " << factorial << endl;

    return 0;
}
