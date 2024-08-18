// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 13
// Problema planteado: Leer un número entero y mostrarlo con las cifras al revés.

#include <iostream>

using namespace std;

int main() {
    int numero, digito, invertido = 0;
    system("cls");

    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Invertimos el número
    while (numero != 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    cout << "El número invertido es: " << invertido << endl;

    return 0;
}
