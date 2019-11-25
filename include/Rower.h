#ifndef ROWER_H
#define ROWER_H

#include <Pojazdy.h>


class Rower : public Pojazdy
{
    public:
        Rower();
        virtual ~Rower();

        void set_cena();
        int get_cena();

    private:
        int cena;
};

#endif // ROWER_H
