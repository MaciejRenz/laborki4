#include "Pojazdy.h"
#include <iostream>

Pojazdy::Pojazdy()
{
    std::cout << "wywo�ano konstruktor DOMYSLNY klasy nadrz�dnej" << std::endl;
}

Pojazdy::Pojazdy(int rocznik_p)
{
    std::cout << "wywo�ano konstruktor klasy nadrz�dnej" << std::endl;
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
