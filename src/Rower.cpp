#include "Rower.h"
#include <iostream>

Rower::Rower(int cena_r)
{
    cena=cena_r;
    std::cout << cena<<std::endl;
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


