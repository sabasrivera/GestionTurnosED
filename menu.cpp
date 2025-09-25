#include <iostream>
#include "menu.hpp"
#include <string>
#include <vector>
#include "pila.hpp"
#include "cola.hpp"

using namespace std;

menu::menu()
{
}
void menu::mostrarMenu()
{
    cout << "----------- SISTEMA DE TURNOS -----------" << endl;
    cout << "1. Registrar cliente general" << endl;
    cout << "2. Registrar cliente VIP" << endl;
    cout << "3. Atender cliente" << endl;
    cout << "4. Consultar historial de turnos atendidos" << endl;
    cout << "5. Salir" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Elija una opcion: ";
}
void menu::registrarClienteGeneral()
{
    system("cls");

    turno = "Turno " + to_string(contador_general++);
    clientes_generales.enqueue(turno);
    cout << "------ Registro de Turno General ------" << endl;
    cout << "Cliente Recibe " << turno << "." << endl;
    cout << "---------------------------------------" << endl;
}
void menu::registrarClienteVIP()
{
    system("cls");
    turno = "Turno VIP - " + to_string(contador_vip++);
    clientes_vip.push(turno);
    cout << "------ Registro de Turno VIP ------" << endl;
    cout << "Cliente Recibe " << turno << "." << endl;
    cout << "------------------------------------" << endl;
}
void menu::atenderCliente()
{
    system("cls");
    if (!clientes_vip.isEmpty())
    {
        turno_atendido = clientes_vip.peek();
        cout << "------ Atendiendo Turno VIP ------" << endl;
        cout << "Atendiendo al cliente: " << turno_atendido << endl;
        cout << "----------------------------------" << endl;
        historial_atendidos.push_back(turno_atendido + " (VIP)");
        clientes_vip.pop();
    }
    else if (!clientes_generales.isEmpty())
    {
        turno_atendido = clientes_generales.front();
        cout << "------ Atendiendo Turno General ------" << endl;
        cout << "Atendiendo al cliente: " << turno_atendido << endl;
        cout << "--------------------------------------" << endl;
        historial_atendidos.push_back(turno_atendido + " (General)");
        clientes_generales.dequeue();
    }
    else
    {
        cout << "------ Atendiendo Clientes ------" << endl;
        cout << "No hay clientes en espera para atender." << endl;
        cout << "---------------------------------" << endl;
    }
}
void menu::historialAtendidos()
{
    system("cls");
    cout << "------ Historial de Turnos Atendidos ------" << endl;
    if (historial_atendidos.empty())
    {
        cout << "Aún no se ha atendido a ningún cliente." << endl;
    }
    else
    {
        int contador=1;
        for (int i = historial_atendidos.size() - 1; i >= 0; i--)
        {
            cout << contador++ << ". " << historial_atendidos[i] << endl;
        }
    }
    cout << "---------------------------------------------" << endl;
}