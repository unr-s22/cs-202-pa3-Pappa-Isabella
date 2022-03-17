#include <stdio.h>
#include <iostream>

#ifndef MONEY_H
#define MONEY_H

class Money
{
private:
    int cents, dollars;
public:
    //Money constructor
    Money()
    {
        cents = 0;
        dollars = 0;
    }

    //setters and getters prototypes for cents and dollars integers
    void setCents(int);
    int getCents();
    void getDollars(int);
    int getDollars();
};


#endif //MONEY_H