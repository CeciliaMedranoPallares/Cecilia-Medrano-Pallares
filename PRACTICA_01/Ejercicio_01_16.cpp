// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 16
// Problema planteado: Múltiplos de 3 por la letra "x"-Múltiplos de 5 por la letra "y"- Múltiplos de 3 y de 5 a la vez por la letra "z".

#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese un número entero positivo: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (i % 3 == 0 && i % 5 == 0) { 
            cout << "z" << endl;//Multliplos de 3 y 5 
        } else if (i % 3 == 0) {//Multiplos de 3
            cout << "x" << endl;
        } else if (i % 5 == 0) {//Multiplos de 5
            cout << "y" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}
