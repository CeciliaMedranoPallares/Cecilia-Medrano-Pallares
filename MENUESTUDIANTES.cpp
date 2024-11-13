/* DEFINICION DE LIBRERIAS */
#include <iostream>
#include <vector>

using namespace std;

/* DEFINICION DE ESTRUCTURAS */
struct contacto
{
    unsigned long ci;
    char nombres[30];
    char apellidos[30];
    char paralelo[4];
    double nota_parcial1;
    double nota_parcial2;
    double nota_parcial3;
    double nota_habilitacion;
};

/* DEFINICIONES DE FUNCIONES */
void MenuPrincipal();
void SeleccionarOpcionMenu(vector<contacto>&);
void AgregarContacto(vector<contacto>&);
void MostrarContactos(vector<contacto>);
void EliminarContacto(vector<contacto>&);
void ModificarContacto(vector<contacto>&);
void BuscarContacto(vector<contacto>);

/* PROGRAMA PRINCIPAL */
int main()
{
    vector<contacto> agenda;
    SeleccionarOpcionMenu(agenda);
    return 0;
}

/* FUNCIONES */

void MenuPrincipal()
{
    system("cls");
    cout << "\tMENU PRINCIPAL" << endl;
    cout << "==========================" << endl;
    cout << "\t1. Agregar estudiante" << endl;
    cout << "\t2. Ver estudiante" << endl;
    cout << "\t3. Buscar estudiante" << endl;
    cout << "\t4. Eliminar estudiante" << endl;
    cout << "\t5. Modificar estudiante" << endl;
    cout << "\t0. SALIR" << endl;
}

void SeleccionarOpcionMenu(vector<contacto> &agenda)
{
    int opcion = 0;
    do
    {
        MenuPrincipal();
        cout << "Seleccione una opcion:";
        cin >> opcion;
        switch (opcion)
        {
            case 0:
                break;
            case 1:
                AgregarContacto(agenda);
                system("pause");
                break;
            case 2:
                MostrarContactos(agenda);
                system("pause");
                break;
            case 3:
                BuscarContacto(agenda);
                system("pause");
                break;
            case 4:
                EliminarContacto(agenda);
                system("pause");
                break;
            case 5:
                ModificarContacto(agenda);
                system("pause");
                break;
            default:
                cout << "USTED NO HA SELECCIONADO NINGUNA OPCION" << endl;
                system("pause");
                break;
        }
    } while (opcion != 0);
}

void AgregarContacto(vector<contacto> &agenda)
{
    contacto DatosContacto;
    system("cls");
    cout << endl << "AGREGAR ESTUDIANTE" << endl;
    cout << "================" << endl;
    DatosContacto.ci =agenda.size()+1;
    cout << "Ingresar ci del estudiante: ";
    cin >> DatosContacto.ci;
    cin.ignore();
    cout << "Ingresar nombres del estudiante: ";
    cin.getline(DatosContacto.nombres, 30);
    cout << "Ingresar apellidos del estudiante: ";
    cin.getline(DatosContacto.apellidos, 30);
    cout << "Ingresar paralelo del estudiante: ";
    cin >> DatosContacto.paralelo;
    cout << "Ingresar la nota del primer parcial: ";
    cin >> DatosContacto.nota_parcial1;
    cout << "Ingresar la nota del segundo parcial: ";
    cin >> DatosContacto.nota_parcial2;
    cout << "Ingresar la nota del tercer parcial: ";
    cin >> DatosContacto.nota_parcial3;
    agenda.push_back(DatosContacto);
    cout << "El estudiante ha sido agregado correctamente." << endl;
}

void MostrarContactos(vector<contacto> agenda)
{
    system("cls");
    cout << endl << "LISTADO ESTUDIANTES" << endl;
    cout << "=================" << endl;
    for (int i = 0; i < agenda.size(); i++)
    {
        cout << "\tESTUDIANTE CI: " << agenda[i].ci << endl;
        cout << "\t----------------" << endl;
        cout << "\tNombres: " << agenda[i].nombres << endl;
        cout << "\tApellidos: " << agenda[i].apellidos << endl;
        cout << "\tParalelo: " << agenda[i].paralelo << endl;
        cout << "\tNota Primer parcial: " << agenda[i].nota_parcial1 << endl;
        cout << "\tNota segundo parcial: " << agenda[i].nota_parcial2 << endl;
        cout << "\tNota tercer parcial: " << agenda[i].nota_parcial3 << endl;
        cout << "\tNota de habilitacion: " << agenda[i].nota_parcial3+agenda[i].nota_parcial1+agenda[i].nota_parcial2 << endl;
        cout << "\t-------------------------" << endl << endl;
    }
}

void EliminarContacto(vector<contacto> &agenda)
{
    int ci = 0;
    int indice = -1;
    system("cls");
    cout << "Ingrese el CI del contacto a eliminar: ";
    cin >> ci;
    for (int i = 0; i < agenda.size(); i++)
    {
        // Buscamos si existe el ID ingresado y guardamos el indice del vector que lo apunta.
        if (agenda[i].ci == ci)
            indice = i;
    }
    if (indice == -1)
    {
        cout << "No se ha encontrado el CI del estudiante." << endl;
    }
    else
    {
        agenda.erase(agenda.begin() + indice);
        cout << "Se ha eliminado el estudiante con el CI: " << ci << " correctamente." << endl;
    }    
}

void ModificarContacto(vector<contacto> &agenda)
{
    int ci = 0;
    int indice = -1;
    system("cls");
    cout << "Ingrese el ID del contacto a modificar: ";
    cin >> ci;
    for (int i = 0; i < agenda.size(); i++)
    {
        // Buscamos si existe el ID ingresado y guardamos el indice del vector que lo apunta.
        if (agenda[i].ci == ci)
            indice = i;
    }
    if (indice == -1)
    {
        cout << "No se ha encontrado el ID del contacto." << endl;
    }
    else
    {
        cout << endl << "MODIFICAR ESTUDIANTE ID: " << ci << endl;
        cout << "-----------------------" << endl;
        cin.ignore();
        cout << "Ingresar nombres del estudiante: ";
        cin.getline(agenda[indice].nombres, 30);
        cout << "Ingresar apellidos del estudiante: ";
        cin.getline(agenda[indice].apellidos, 30);
        cout << "Ingresar paralelo del contacto: ";
        cin.getline(agenda[indice].paralelo, 4);
        cout << "Ingresar nota del primer parcial: ";
        cin >> agenda[indice].nota_parcial1;
        cout << "Ingresar nota del segundo parcial: ";
        cin >> agenda[indice].nota_parcial2;
        cout << "Ingresar nota del tercer parcial: ";
        cin >> agenda[indice].nota_parcial3;
        
        cout << "Se ha modificado el contacto con el ID: " << ci << " correctamente." << endl;
    }    
}

void BuscarContacto(vector<contacto> agenda)
{

    int ci=0;
    int indice = -1;
    system("cls");
    cout << "Ingrese el apellido del estudiante a buscar: ";
    cin>>ci;
    for (int i = 0; i < agenda.size(); i++)
    {
        // Buscamos si existe el ID ingresado y guardamos el indice del vector que lo apunta.
        if (agenda[i].ci ==ci){
            indice = i;
        }
    if (indice == -1)
    {
        cout << "No se ha encontrado el apellido del estudiante." << endl;
    }
    else
    {
        cout << "\tESTUDIANTE ID: " << agenda[indice].ci << endl;
        cout << "\t----------------" << endl;
        cout << "\tNombres: " << agenda[indice].nombres << endl;
        cout << "\tApellidos: " << agenda[indice].apellidos << endl;
        cout << "\tParalelo: " << agenda[indice].paralelo << endl;
        cout << "\tNota del primer parcial: " << agenda[indice].nota_parcial1 << endl;
        cout << "\tNota del segundo parcial: " << agenda[indice].nota_parcial2 << endl;
        cout << "\tNota dek tercer parcial: " << agenda[indice].nota_parcial3 << endl;
        cout << "\t-------------------------" << endl << endl;
    }    
}}
//TAREA BUSCAR POR APELLIDO,NOMBRE,MOSTRAR NOTA DE HABILITACION Y EN UN INICIO BUSCA POR CI
