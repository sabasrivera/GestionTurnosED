#include <iostream>
#include "Banco.hpp"

using namespace std;

void Banco::registrarClienteVIP()
{
    system("cls");
    turno = "Turno VIP - " + to_string(contador_vip++);
    clientes_vip.push(turno);
    cout << "------ Registro de Turno VIP ------" << endl;
    cout << "Cliente Recibe " << turno << "." << endl;
    cout << "------------------------------------" << endl;
}
