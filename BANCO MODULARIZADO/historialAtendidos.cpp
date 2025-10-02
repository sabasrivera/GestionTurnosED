#include <iostream>
#include "Banco.hpp"

using namespace std;

void Banco::historialAtendidos()
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
