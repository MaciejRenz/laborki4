#include "Pojazdy.h"
#include <iostream>

Pojazdy::Pojazdy()
{
    //ctor
}

Pojazdy::~Pojazdy()
{
    //dtor
}

int Pojazdy::get_rocznik()
{
    return rocznik;
}

void Pojazdy::set_rocznik()
{
    std::cout << "Podaj nowy rocznik dla pojazdu:";
    std::cin >> rocznik;
}
