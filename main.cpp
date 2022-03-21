//Programming assignment 3
//Isabella Pappa and Emily Cuellar
//Group 30

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int decision;

    class Account account(class Money(300, 23));

    //user menu.. prompt for function choice
    std::cout << "Bank Account" << std::endl;
    std::cout << "What would you like to do?" << std::endl;
    std::cout << "0. Withdraw" << std::endl << "1. Deposit" << std::endl << "2. Get Account Information" << std::endl << "3. EXIT" << std::endl << ">>" std::endl;

    std::cin >> decision;

    //process user decision TODO:(we may not need a user choice screen for this project but i made one anyway)
    switch(decision)
    {
        case 0:
            //run withdraw method in account class
            account.makeWithdrawls(class Money);
            break;

        case 1:
            //run deposit method in account class
            account.makeDeposits(class Money)
            break;

        case 2:
            //print out account information
            std::cout << account << std::endl;
            break;

        case 3:
            //exit program
            exit(EXIT_FAILURE); //TODO:(not sure if we're allowed to use this function but whatevs)
            break;

        default:
            //reprompt user to enter a valid choice
            std::cout << "Please enter a valid choice (0-3): " << std::endl;
            break;
    }

    //call Account constructor and set dollars and cents values
    class Account account();
    account.money.setDollars(300); //TODO:(dont think these are formatted correctly)
    account.money.setCents(23);
    // Im just messing around with this part to see if I can fix
    Account p1(300,23);
    std::cout << account << std::endl;
    return 0;
}
