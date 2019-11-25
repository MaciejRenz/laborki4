#ifndef SAMOCHOD_H
#define SAMOCHOD_H

#include <Pojazdy.h>


class Samochod : public Pojazdy
{
    public:
        Samochod(int pojemnosc_silnika_s);
        virtual ~Samochod();

        void set_pojemnosc_silnika();
        int get_pojemnosc_silnika();
        void uruchom();

    private:
        int pojemnosc_silnika;

};

#endif // SAMOCHOD_H
