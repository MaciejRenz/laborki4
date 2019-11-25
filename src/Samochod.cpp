#include "Samochod.h"
#include <iostream>

Samochod::Samochod(int pojemnosc_silnika_s)
{
    pojemnosc_silnika=pojemnosc_silnika_s;
    std::cout<<pojemnosc_silnika<<std::endl;
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
void Samochod::uruchom()
{
    std::cout << "Przekrecam kluczyk w stacyjce..";
}

