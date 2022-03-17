#include "account.h"

//method to deposit money into the account
int makeDeposits(class Money)
{
    int depDollars, depCents, count;

    //prompt user for amount to deposit
    std::cout << "How many dollars would you like to deposit: ";
    std::cin >> depDollars >> std::endl;

    std::cout << std::endl << "How many cents would you like to deposit: ";
    std::cin >> depCents >> std::endl;

    //add depositied amount to original balance
    dollars += depDollars;
    cents += depCents;

    //count how many times a deposit is made
    count += 1;
    return count;
}

//mehtod to withdraw money from the account
int makeWithdrawls(class Money)
{
    int withDollars, withCents, count;

    //prompt user for amount to withdraw
    std::cout << "How many dollars would you like to withdraw: ";
    std::cin >> withDollars >> std::endl;

    std::cout << std::endl << "How many cents would you like to deposit: ";
    std::cin >> withCents >> std::endl;

    //subtract withdraw amount from original balance
    dollars += depDollars;
    cents += depCents;

    //count how many times a withdrawl is made TODO:(not sure what variable to set this value to)
    count += 1;
    return count;
}
