#include <stdio.h>
#include <iostream>

#ifndef ACCOUNT_H
#define ACCOUNT_H

//this class has a "has-a" relationship with the Money class
class Account
{
private:
    float currentBalance;
public:
    //account constructor
    Account()
    {
        //TODO: create money object inside account object, has-a relationship (I'm not sure if I did this correctly)
        Money accBalance;
    }

    //deposit and withdraw method initializers
    int makeDeposits(class Money);
    int makeWithdrawls(class Money);
};

#endif //ACCOUNT_H