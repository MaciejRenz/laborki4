#include "Samochod.h"
#include <iostream>

Samochod::Samochod()
{
    //ctor
}

Samochod::~Samochod()
{
    //dtor
}
int Samochod::get_pojemnosc_silnika()
{
    return pojemnosc_silnika;
}

void Samochod::set_pojemnosc_silnika()
{
    std::cout << "Podaj nowa pojemnosc silnika:";
    std::cin >> pojemnosc_silnika;
}

