#include "Autobus.h"
#include <iostream>

Autobus::Autobus(int ilosc_miejsc_a)
{
   ilosc_miejsc=ilosc_miejsc_a;
   std::cout<<ilosc_miejsc<<std::endl;
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


