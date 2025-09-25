#ifndef MENU_HPP
#define MENU_HPP

#include <string>
#include <vector>
#include "pila.hpp"
#include "cola.hpp"

using namespace std;

class menu
{
private:
    string turno;
    string turno_atendido;

    int contador_general = 1;
    int contador_vip = 1;
    
    cola clientes_generales;
    pila clientes_vip;
    vector<string> historial_atendidos;
    
    
public:
    menu();
    
    void mostrarMenu();
    void registrarClienteGeneral();
    void registrarClienteVIP();
    void atenderCliente();
    void historialAtendidos();
};

#endif
