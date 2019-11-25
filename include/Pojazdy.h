#ifndef POJAZDY_H
#define POJAZDY_H


class Pojazdy
{
    public:
        Pojazdy();
        Pojazdy(int rocznik_p);
        virtual ~Pojazdy();

        void set_rocznik();
        int get_rocznik();
        virtual void uruchom() = 0;

    private:
        int rocznik;
};

#endif // POJAZDY_H
