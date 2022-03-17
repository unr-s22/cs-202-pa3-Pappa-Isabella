#include "account.h"

//method to deposit money into the account
int makeDeposits(int dollars, int cents)
{
    int depDollars, depCents;

    //prompt user for amount to deposit
    std::cout << "How many dollars would you like to deposit: ";
    std::cin >> depDollars >> std::endl;

    std::cout << std::endl << "How many cents would you like to deposit: ";
    std::cin >> depCents >> std::endl;

    //add depositied amount to original balance
    dollars += depDollars;
    cents += depCents;
}

//mehtod to withdraw money from the account
int makeWithdrawls(int dollars, int cents)
{
    int withDollars, withCents;

    //prompt user for amount to withdraw
    std::cout << "How many dollars would you like to withdraw: ";
    std::cin >> withDollars >> std::endl;

    std::cout << std::endl << "How many cents would you like to deposit: ";
    std::cin >> withCents >> std::endl;

    //subtract withdraw amount from original balance
    dollars += depDollars;
    cents += depCents;
}