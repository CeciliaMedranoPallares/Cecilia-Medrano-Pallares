// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 1
// Problema planteado: Área de un triángulo.

#include <iostream>
using namespace std;

int main()
{
    int base, altura;
    system("cls");
    cout << "Ingrese la base del triángulo: ";
    cin >> base;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    float area; //Área como número flotante porque no siempre será numero entero.
    area = (base * altura) / 2;//Fórmula para el área de un triángulo.

    cout << "El área del triángulo es " << area << " unidades cuadradas." << endl;

    return 0;
}
