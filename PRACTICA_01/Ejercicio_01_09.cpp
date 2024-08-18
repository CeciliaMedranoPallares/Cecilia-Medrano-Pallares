// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 9
// Problema planteado: Mostrar los primero 100 número primos.
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    int numero = 2; // Primer número primo
    int count = 0; // Contador de números primos 

    system("cls");

    while (count < 100) {
        int divisores = 0; // Contador de divisores del número

        for (int i = 1; i <= numero; i++) {// Calcular la cantidad de divisores del número actual
            if (numero % i == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {// Verificar si el número tiene exactamente 2 divisores 
            cout << numero << " "; // Imprime el número primo
            count++;
        }

        numero++; // Pasar al siguiente número
    }

    cout << endl; 

    return 0;
}

