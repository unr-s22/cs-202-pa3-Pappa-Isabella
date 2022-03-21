#include <stdio.h>
#include <iostream>

#ifndef MONEY_H
#define MONEY_H

class Money
{
//friend function to override the output stream 
class Account{ 
friend std::ostream& operator<<(std::ostream& os, Account p1); 
private:
    int cents, dollars;
public:
    //Money constructor
    Money(int c, int d)
    {
        cents = c;
        dollars = d;
    }

    //setters and getters prototypes for cents and dollars integers
    int getCents();
    int getDollars();

    //declare friend function
    friend class Account;
};


#endif //MONEY_H
