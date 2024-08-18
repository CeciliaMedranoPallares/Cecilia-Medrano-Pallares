// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 12
// Problema planteado: leer dos números y verificar si uno es múltiplo del otro o no lo es.

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2;
    system("cls");

    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    // Verificar si numero1 es múltiplo de numero2
    if (numero2 != 0 && numero1 % numero2 == 0) {
        cout << numero1 << " es múltiplo de " << numero2 << "." << endl;
    } else {
        cout << numero1 << " no es múltiplo de " << numero2 << "." << endl;
    }

    // Verificar si numero2 es múltiplo de numero1
    if (numero1 != 0 && numero2 % numero1 == 0) {
        cout << numero2 << " es múltiplo de " << numero1 << "." << endl;
    } else {
        cout << numero2 << " no es múltiplo de " << numero1 << "." << endl;
    }

    return 0;
}
