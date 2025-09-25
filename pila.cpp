#include "pila.hpp"

using namespace std;
pila::pila()
{
}
void pila::push(const string &cliente)
{ // agregar un cliente VIP
    clientes_vip.push(cliente);
}

void pila::pop()
{ // sacamos un cliente vip
    if (!clientes_vip.empty())
    {
        clientes_vip.pop();
    }
}

string pila::peek()
{ // obtenemos el cliente VIP que esta arriba
    if (!clientes_vip.empty())
    {
        return clientes_vip.top();
    }
    return " ";
}

bool pila::isEmpty()
{
    return clientes_vip.empty();
}