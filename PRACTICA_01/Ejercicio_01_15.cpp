// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 15
// Problema planteado: Piramide de números consecutivos.
#include <iostream>
using namespace std;

int main() {
    int filas = 8; // Número de filas 

    for (int i = 1; i <= filas; i++) {
        // Para la parte creciente
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Para la parte decreciente
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
