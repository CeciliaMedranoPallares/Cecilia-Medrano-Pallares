// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 19
// Problema planteado:  Programa que reciba días, horas, minutos y segundos (como enteros) y retorne su resultado en segundos.
#include <iostream>
using namespace std;

int main() {
    int dias, horas, minutos, segundos;
    int totalSegundos;

    cout << "Ingrese la cantidad de días: ";
    cin >> dias;

    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;

    cout << "Ingrese la cantidad de minutos: ";
    cin >> minutos;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;

    // Convertir todo a segundos
    totalSegundos = (dias * 24 * 3600) + (horas * 3600) + (minutos * 60) + segundos;

    cout << "El total en segundos es: " << totalSegundos << endl;

    return 0;
}
