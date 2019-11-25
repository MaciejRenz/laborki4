#include "Motor.h"
#include <iostream>

Motor::Motor()
{
    //ctor
}

Motor::~Motor()
{
    //dtor
}
std::string Motor::get_kolor()
{
    return kolor;
}

void Motor::set_kolor()
{
    std::cout << "Podaj nowy kolor:";
    std::cin >> kolor;
}
void Motor::uruchom()
{
    std::cout << "Przekrecam kluczyk w stacyjce..";
}


