#ifndef COLA_HPP
#define COLA_HPP

using namespace std;

#include <queue>
#include <string>

class cola
{
private:
    queue<string> clientes_generales;

public:
    cola();

    void enqueue(const string &cliente);
    void dequeue();
    std::string front();
    bool isEmpty();
    size_t size();
};

#endif