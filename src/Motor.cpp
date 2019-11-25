#include "Motor.h"
#include <iostream>

Motor::Motor(std::string kolor_m)
{
    kolor=kolor_m;
    std::cout<<kolor<<std::endl;
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


