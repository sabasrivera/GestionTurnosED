#include <iostream>
#include "Banco.hpp"

using namespace std;

void Banco::mostrarMenu()
{
    cout << "----------- SISTEMA DE TURNOS -----------" << endl;
    cout << "1. Registrar cliente general" << endl;
    cout << "2. Registrar cliente VIP" << endl;
    cout << "3. Atender cliente" << endl;
    cout << "4. Consultar historial de turnos atendidos" << endl;
    cout << "5. Mostrar Estadistica" << endl;
    cout << "6. Salir" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Elija una opcion: ";
}
