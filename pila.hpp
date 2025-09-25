#ifndef PILA_HPP
#define PILA_HPP

#include <stack>
#include <string>

using namespace std;

class pila
{
private:

    stack<string> clientes_vip;

public:
    pila();
    void push(const string &cliente);
    void pop();
    string peek();
    bool isEmpty();
};

#endif
