#ifndef MOTOR_H
#define MOTOR_H

#include <Pojazdy.h>
#include <iostream>


class Motor : public Pojazdy
{
    public:
        Motor();
        virtual ~Motor();
        std::string get_kolor();
        void set_kolor();

    private:
        std::string kolor;
};

#endif // MOTOR_H
