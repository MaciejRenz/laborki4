#include <iostream>
#include "Pojazdy.h"
#include "Samochod.h"
#include "Rower.h"
#include "Autobus.h"
#include "Motor.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Autobus pojazd;
    pojazd.set_ilosc_miejsc();
    cout << pojazd.get_ilosc_miejsc();

    return 0;
}
