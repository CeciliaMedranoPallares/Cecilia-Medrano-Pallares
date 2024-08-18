// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 4.
// Problema planteado: conversión de temperatura de grados centígrado a Kelvin

#include <iostream>
using namespace std;

int main()
{
    float centigrados, kelvin;
    system("cls");
    cout << "Ingrese los grados centígrados que desea convertir a grados Kelvin: ";
    cin >> centigrados;

    kelvin = centigrados + 273.15; // Fómula de conversión 

    cout << centigrados << " grados centígrados son " << kelvin << " grados Kelvin." << endl;

    return 0;
}
