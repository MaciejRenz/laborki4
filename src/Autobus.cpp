#include "Autobus.h"
#include <iostream>

Autobus::Autobus()
{
    //ctor
}

Autobus::~Autobus()
{
    //dtor
}
int Autobus::get_ilosc_miejsc()
{
    return ilosc_miejsc;
}

void Autobus::set_ilosc_miejsc()
{
    std::cout << "Podaj nowa ilosc miejsc:";
    std::cin >> ilosc_miejsc;
}
void Autobus::uruchom()
{
    std::cout << "Przekrecam kluczyk w stacyjce..";
}


