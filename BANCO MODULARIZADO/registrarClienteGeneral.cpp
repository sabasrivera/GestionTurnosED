#include <iostream>
#include "Banco.hpp"

using namespace std;

void Banco::registrarClienteGeneral()
{
    system("cls");

    turno = "Turno " + to_string(contador_general++);
    clientes_generales.push(turno);
    cout << "------ Registro de Turno General ------" << endl;
    cout << "Cliente Recibe " << turno << "." << endl;
    cout << "---------------------------------------" << endl;
}
