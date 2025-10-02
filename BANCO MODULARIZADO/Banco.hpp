#ifndef BANCO_HPP
#define BANCO_HPP

#include <string>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

class Banco
{
private:
    string turno;
    string turno_atendido;

    int contador_general = 1;
    int contador_vip = 1;
    
    queue<string> clientes_generales;  
    stack<string> clientes_vip;        
    vector<string> historial_atendidos;
    
    
public:
    Banco();
    
    void mostrarMenu();
    void registrarClienteGeneral();
    void registrarClienteVIP();
    void atenderCliente();
    void historialAtendidos();
    void mostrarEstadisticas(); 
};

#endif
