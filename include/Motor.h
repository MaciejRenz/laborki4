#ifndef MOTOR_H
#define MOTOR_H

#include <Pojazdy.h>
#include <iostream>


class Motor : public Pojazdy
{
    public:
        Motor(std::string kolor_m);
        virtual ~Motor();
        std::string get_kolor();
        void set_kolor();
        void uruchom();

    private:
        std::string kolor;
};

#endif // MOTOR_H
