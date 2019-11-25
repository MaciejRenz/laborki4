#include "Pojazdy.h"
#include <iostream>

Pojazdy::Pojazdy()
{
    std::cout << "wywo³ano konstruktor DOMYSLNY klasy nadrzêdnej" << std::endl;
}

Pojazdy::Pojazdy(int rocznik_p)
{
    std::cout << "wywo³ano konstruktor klasy nadrzêdnej" << std::endl;
    rocznik = rocznik_p;
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
