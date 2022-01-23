#include <iostream>
#include <stdlib.h>
#include "UserGuide.h"
#include "Customer.h"

class Interface
{
public:
    int MainMenu();
};

int Interface::MainMenu()
{
    //Cleared the screen 
    system("CLS");
    int choice;
    std::cout << "                             \t\t\t-----------------------------------------------------------------" << std::endl;
    std::cout << "                             \t\t\t\t\t\t  Welcome to the\n"
              << "                             \t\t\t\t\t\tSTATE BANK OF INDIA\n"
              << "                             \t\t\t-----------------------------------------------------------------" << std::endl
              << "                             \t\t\t\t Press     |        For" << std::endl
              << "                             \t\t\t-----------------------------------------------------------------" << std::endl
              << "                             \t\t\t\t 1         |        Create New account" << std::endl
              << "                             \t\t\t\t 2         |        Deposit" << std::endl
              << "                             \t\t\t\t 3         |        Withdrawal" << std::endl
              << "                             \t\t\t\t 4         |        Balance Enquiry" << std::endl
              << "                             \t\t\t\t 5         |        Account holder's details" << std::endl
              << "                             \t\t\t\t 6         |        Close account " << std::endl
              << "                             \t\t\t\t 7         |        Modify account " << std::endl
              << "                             \t\t\t\t 8         |        Exit " << std::endl
              << "                             \t\t\t-----------------------------------------------------------------" << std::endl;
    std::cout << "                             \n\t\t\t\tEnter your Choice : ";
    std::cin >> choice;
    return choice;
    
    // yn (Yes/No) = choice (if user wants to continue or not)
    char yn;
    Interface interface;
    do
    {
        choice = interface.MainMenu();
        switch (choice)
        {
        case 1: 
            std::cout << "User Guide";
            UserGuide();  
            break;
                
        case 2:
            std::cout << " Create New account";
            Customer customer;
                
            // Implicitly called GetUserData()
            customer.CreateAccount(); 
            break;
                
        case 3:
            std::cout << " Deposit";
            break;
                
        case 4:
            std::cout << " Withdrawal";
            break;
                
        case 5:
            std::cout << " Balance Enquiry";
            break;
                
        case 6:
            std::cout << " Account holder's details";
            customer.AccountDetails(); 
            break;
                
        case 7:
            std::cout << " Close account";
            break;
                
        case 8:
            std::cout << " Modify account";
            break;
                
        case 9:
            break;
                
        default:
            std::cout << " ERROR 101 : Wrong Choice ";
            break;
        }
        std::cout << "\nDo you want to continue (Y/N) = ";
        std::cin >> yn;
    } // End of Do loop
    while (yn == 'y' || yn == 'Y');
}
