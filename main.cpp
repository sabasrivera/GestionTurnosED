#include <iostream>
#include <string>

#include "menu.hpp"

using namespace std;

int main()
{
    menu menu;

    int opcion;
    do
    {
        menu.mostrarMenu();
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            menu.registrarClienteGeneral();
            break;
        }
        case 2:
        {
            menu.registrarClienteVIP();
            break;
        }
        case 3:
        {
            menu.atenderCliente();
            break;
        }
        case 4:
        {
            menu.historialAtendidos();
            break;
        }

        case 5:
            cout << "Saliendo del sistema. ¡Hasta pronto!" << endl;
            break;

        default:
            cout << "Opción no válida. Por favor, intente de nuevo." << endl
                 << endl;
            break;
        }
    } while (opcion != 5);
    return 0;
}