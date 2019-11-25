#ifndef POJAZDY_H
#define POJAZDY_H


class Pojazdy
{
    public:
        Pojazdy();
        virtual ~Pojazdy();

        void set_rocznik();
        int get_rocznik();

    private:
        int rocznik;
};

#endif // POJAZDY_H
