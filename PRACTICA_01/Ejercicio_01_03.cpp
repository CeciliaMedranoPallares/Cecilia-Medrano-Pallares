// Materia: Programación I, Paralelo 1
// Autor: Cecilia Belen Medrano Pallares.
// Fecha creación: 17/08/2024
// Número de ejercicio: 3
// Problema planteado: Promedio total  de N notas.
#include <iostream>
using namespace std;

int main()
{
    int N;//N es el número de notas.
    float suma = 0, promedio;//Suma es el acumulador de todas las notas.
    int contador = 1; 
    system("cls");
    cout << "Ingrese de cuántas notas se sacará el promedio: ";
    cin >> N;

    // Mientras el contador sea menor al número de notas,seguira preguntanto el valor de las notas.
    while (contador <= N) {
        float nota;
        cout << "Ingrese la nota número " << contador << ": ";
        cin >> nota;
        suma += nota;
        contador++;//Aumenta en 1 en cada vuelta
    }

    promedio = suma / N;
    cout << "El promedio total de las notas es: " << promedio << endl;

    return 0;
}
