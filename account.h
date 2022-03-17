#include <stdio.h>
#include <iostream>

#ifndef ACCOUNT_H
#define ACCOUNT_H

//this class has a "has-a" relationship with the Money class TODO:(not sure if this is how has-a is established)
class Account
{
private:
    //create Money object inside account class
    Money money;
    int currentDollars, currentCents, numDeposits, numWithdrawls;

public:
    //account constructor
    Account()
    {
        currentDollars = dollars;
        currentCents = cents;
        numDeposits = 0;
        numWithdrawls = 0;
    }

    //deposit and withdraw method initializers
    int makeDeposits(class Money);
    int makeWithdrawls(class Money);
};

#endif //ACCOUNT_H