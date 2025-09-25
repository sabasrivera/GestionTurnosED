#include "cola.hpp"

cola:: cola(){

}
void cola::enqueue(const string &cliente)
{//agregar un cliente normal
    clientes_generales.push(cliente);
}

void cola::dequeue()
{//sacamos un cliente normal
    if (!clientes_generales.empty())
    {
        clientes_generales.pop();
    }
}

string cola::front()
{//obtenemos el primer cliente
    if (!clientes_generales.empty())
    {
        return clientes_generales.front();
    }
    return "";
}

bool cola::isEmpty()
{
    return clientes_generales.empty();
}

size_t cola::size(){
    return clientes_generales.size();
}