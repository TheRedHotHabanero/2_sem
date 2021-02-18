#ifndef SUBVECTOR_SUBVECTOR_OOP_H
#define SUBVECTOR_SUBVECTOR_OOP_H

#include <iostream>
#include <cassert>

class subvector
{
private:
    int* mas;
    uint top; //всегда указывет на последний полезный элемент;
    uint capacity;

public:
    subvector(); //инициализация пустого недовектора
    ~subvector(); // деструктор на
    void expand(uint new_len);
    bool push_back(int d); //добав. в конец с выдел. памяти при необх.
    int pop_back( ); //удаление элем. с конца недовектора
    bool resize(uint new_capacity); //увел емкость недовек.
    void shrink_to_fit( ); //очистить неисп. память
    void clear( ); //очист. содерж., заним. место при этом const

};

#endif //SUBVECTOR_SUBVECTOR_OOP_H
