#ifndef SAMOCHOD_H
#define SAMOCHOD_H

#include <Pojazdy.h>


class Samochod : public Pojazdy
{
    public:
        Samochod();
        virtual ~Samochod();

        void set_pojemnosc_silnika();
        int get_pojemnosc_silnika();

    private:
        int pojemnosc_silnika;

};

#endif // SAMOCHOD_H
