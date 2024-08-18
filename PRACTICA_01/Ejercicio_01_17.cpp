// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 17
// Problema planteado:  Transformar un número decimal a binario sin utilizar funciones propias del lenguaje.
#include <iostream>

using namespace std;

int main() {
    int numero, residuo;
    string binario = "";

    cout << "Ingrese un número: ";
    cin >> numero;
    while (numero > 0) {
        residuo = numero % 2;
        binario = to_string(residuo) + binario; //Convertimos el residuo en string y concatenamos
        numero /= 2;
    }
    cout << "El número en binario es: " << binario << endl;

    return 0;
}