#include "subvector_oop.h"

using std::cin;
using std::cout;
using std::endl;

subvector::subvector()
{
    mas = nullptr;
    top = 0;
    capacity = 0;
}

void subvector::expand(uint new_len)
{
    int* new_a = new int [new_len];

    for (int i = 0; i < top; i++)
        new_a[i] = mas[i];

    if (mas != nullptr)
        delete[] mas;

    mas = new_a;
}

bool subvector::push_back(int d)
{
    assert(capacity >= top);

    if (capacity == top) //если полезная часть равна длине недовектора
    {
        expand(capacity + 2); //то нам надо увеличить размер capacity
        capacity += 2;
    }

    mas[top] = d;
    top++;

    return true;
}

int subvector::pop_back( )
{
    if (top == 0)
        return 0;

    top --;
    return mas[top];
}

bool subvector::resize(uint new_capacity)
{
    if (new_capacity <= capacity)
        return false;

    expand(new_capacity);
    subvector::capacity = new_capacity;

    return true;
}

void subvector::shrink_to_fit( )
{
    assert(top <= capacity);

    if (top == capacity)
        return;

    expand(top);
    capacity = top;
}

void subvector::clear( )
{ top = 0; }

subvector::~subvector( )
{
    if (mas != nullptr)
    {
        delete [] mas;
        mas = nullptr;
    }

    top = capacity = 0;
}
