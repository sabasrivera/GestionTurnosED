#include <iostream>
#include "Banco.hpp"

using namespace std;

void Banco::mostrarEstadisticas()
{
    system("cls");
    cout << "------ Estadisticas del Banco ------\n" << endl;
    
    cout << "Clientes en espera (Generales): " << clientes_generales.size() << endl;
    cout << "Clientes en espera (VIP): " << clientes_vip.size() << endl;
    cout << "Total clientes atendidos: " << historial_atendidos.size() << endl;
    cout << endl;
    cout << "------------------------------------" << endl;
}
