// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 6.
// Problema planteado: Verificar si un número ingresado es amigo.

#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    int s1 = 0, s2 = 0;
    int divisores1=1,divisores2=1;

    cout << "Ingrese el primer número: ";
    cin >> n1;
    cout << "Ingrese el segundo número: ";
    cin >> n2;

    // Calcular la suma de los divisores propios de n1
    while (divisores1 <n1) {
        if (n1 % divisores1 == 0) { // Si el número es divisible sin resto
            s1=s1+divisores1; // Incrementa la suma  de divisores
        }
        divisores1++;
    }

    // Calcular la suma de los divisores propios de n2
    while (divisores2 < n2) {
        if (n2 % divisores2 == 0) { // Si el número es divisible sin resto
            s2=s2+divisores2; // Incrementa la suma de divisores
        }
        divisores2++;
    }
    // Verificar si los números son amigos
    if (s1 == n2 && s2 == n1) {
        cout << n1 << " y " << n2 << " son números amigos." << endl;
    } else {
        cout << n1 << " y " << n2 << " no son números amigos." << endl;
    }

    return 0;
}

