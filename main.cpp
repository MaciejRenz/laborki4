#include <iostream>
#include "Pojazdy.h"
#include "Samochod.h"
#include "Rower.h"
#include "Autobus.h"
#include "Motor.h"

using namespace std;

int main()
{

//Pojazdy pojazd; nie moge stworzyc obiektu bo klasa jest abstrakcyjna
Rower rower(200);
rower.uruchom();
Samochod samochod(2, 2003);
std::cout << samochod.get_rocznik();
    return 0;
}
