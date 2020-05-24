// reading_from_a_file.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //ifstream ifs("My.txt"); //[option 1]
    ifstream ifs;
    ifs.open("My.txt"); // si no está creado no se abre. [option 2]

    //if (ifs)cout << "File is opened" << endl; // Chequeamos si  el archivo esta abierto. [option 2]
    if (ifs.is_open())cout << "File is opened" << endl;

    string name;
    int roll;
    string branch;

    ifs >> name >> roll >> branch; // lectura
    ifs.close();

    cout << "Name " << name << endl;
    cout << "Roll " << roll << endl;
    cout << "Branch " << branch << endl;

    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
