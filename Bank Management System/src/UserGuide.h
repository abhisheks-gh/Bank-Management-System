#include <iostream>
#include <stdlib.h>

class UserGuide
{
public:
    UserGuide()
    {
        system("CLS");
        std::cout << "\t\t\t\t\t\t\t\t\t------------" << std::endl
                  << "\t\t\t\t\t\t\t\t\t USER GUIDE" << std::endl
                  << "\t\t\t\t\t\t\t\t\t------------" << std::endl
                  << "\n\n\t->Welcome to STATE BANK OF INDIA" << std::endl
                  << "\n\n\t->To ensure the safety and fulfill the needs of our customer in this pandemic time our Bank has launched it's own app." << std::endl
                  << "\n\n\t->So, hurry up and do your first online transaction through your online banking account." << std::endl
                  << "\n\n\n\t**If you don't have one than follow the steps below to CREATE YOUR NEW BANKING ACCOUNT" << std::endl
                  << "\n\n\t   MAIN MENU -> CREATE NEW ACCOUNT -> ENTER DETAILS -> LOGIN" << std::endl;   
    }
};
