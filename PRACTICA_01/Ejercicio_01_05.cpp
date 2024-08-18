// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 5
// Problema planteado: Verificar si un número ingresado es primo

#include <iostream>
using namespace std;

int main()
{
    int numero;
    int divisores = 1;
    int contador = 0;
    system("cls");
    cout << "Ingrese un número para verificar si es primo: ";
    cin >> numero;

    // Bucle para contar cuántos divisores tiene el número
    while (divisores <= numero) {
        if (numero % divisores == 0) { // Si el número es divisible sin resto
            contador++; // Incrementa el contador de divisores
        }
        divisores++;
    }

    // Verifica si el número tiene exactamente 2 divisores (1 y él mismo)
    if (contador == 2) {
        cout << "El número es primo." << endl;
    } else {
        cout << "El número no es primo." << endl;
    }

    return 0;
}
