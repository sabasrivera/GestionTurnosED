#include <iostream>
#include <string>
#include "Banco.hpp"

using namespace std;

int main()
{
    Banco banco;

    while (true)
    {
        int opcion;
        banco.mostrarMenu();
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            banco.registrarClienteGeneral();
            break;
        case 2:
            banco.registrarClienteVIP();
            break;
        case 3:
            banco.atenderCliente();
            break;
        case 4:
            banco.historialAtendidos();
            break;
        case 5:
            banco.mostrarEstadisticas();
            break;
        case 6:
            cout << "Saliendo del programa." << endl;
            cout << "Programa finalizado con exito." << endl;
            return 0;
        default:
            cout << "Opsion no valida. Por favor, intente de nuevo." << endl << endl;
            break;
        }
    }
}
