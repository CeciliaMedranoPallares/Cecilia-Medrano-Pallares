// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 2
// Problema planteado: Volumen de una esfera.

#include <iostream>
using namespace std;

int main()
{
    float radio;
    float pi=3.14;
    system("cls");
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;
    float volumen = (4 / 3) * pi*radio*radio*radio; //Fórmula para el volumen de una esfera.
    cout << "El volumen de la esfera es " << volumen << " unidades cúbicas." << endl;
    return 0;
}
