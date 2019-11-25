#ifndef AUTOBUS_H
#define AUTOBUS_H

#include <Pojazdy.h>


class Autobus : public Pojazdy
{
    public:
        Autobus();
        virtual ~Autobus();
        int get_ilosc_miejsc();
        void set_ilosc_miejsc();
        void uruchom();

    private:
        int ilosc_miejsc;
};

#endif // AUTOBUS_H
