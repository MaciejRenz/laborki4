#ifndef ROWER_H
#define ROWER_H

#include <Pojazdy.h>


class Rower : public Pojazdy
{
    public:
        Rower(int cena_r);
        virtual ~Rower();

        void set_cena();
        int get_cena();
        void uruchom();

    private:
        int cena;
};

#endif // ROWER_H
