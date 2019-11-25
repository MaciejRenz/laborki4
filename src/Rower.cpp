#include "Rower.h"
#include <iostream>

Rower::Rower()
{
    //ctor
}

Rower::~Rower()
{
    //dtor
}
int Rower::get_cena()
{
    return cena;
}

void Rower::set_cena()
{
    std::cout << "Podaj nowa cena:";
    std::cin >> cena;
}
void Rower::uruchom()
{
    std::cout << "Zaczynam pedalowac... ;D";
}


