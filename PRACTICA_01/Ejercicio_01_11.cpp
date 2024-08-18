// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 11
// Problema planteado: Multiplicacion con sumas sucesivas.

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    int resultado = 0;
    system("cls");

    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    // Multiplicación mediante sumas sucesivas
    for (int i = 0; i < abs(numero2); i++) {
        resultado += numero1;
    }

    // Ajustar el signo del resultado si uno de los números es negativo
    if ((numero1 < 0 && numero2 >= 0) || (numero2 < 0 && numero1 >= 0)) {
        resultado = -resultado;
    }

    cout << "El resultado de la multiplicación de " << numero1 << " por " << numero2 << " es: " << resultado << endl;

    return 0;
}
