#include <iostream>
#include "Banco.hpp"

using namespace std;

void Banco::atenderCliente()
{
    system("cls");
    if (!clientes_vip.empty())
    {
        turno_atendido = clientes_vip.top();
        cout << "------ Atendiendo Turno VIP ------" << endl;
        cout << "Atendiendo al cliente: " << turno_atendido << endl;
        cout << "----------------------------------" << endl;
        historial_atendidos.push_back(turno_atendido + " (VIP)");
        clientes_vip.pop();
    }
    else if (!clientes_generales.empty())
    {
        turno_atendido = clientes_generales.front();
        cout << "------ Atendiendo Turno General ------" << endl;
        cout << "Atendiendo al cliente: " << turno_atendido << endl;
        cout << "--------------------------------------" << endl;
        historial_atendidos.push_back(turno_atendido + " (General)");
        clientes_generales.pop();
    }
    else
    {
        cout << "------ Atendiendo Clientes ------" << endl;
        cout << "No hay clientes en espera para atender." << endl;
        cout << "---------------------------------" << endl;
    }
}
