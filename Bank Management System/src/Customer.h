#include <iostream>
#include <stdlib.h>

class Customer
{
protected:
    char m_CustomerName[30];
    char m_WardOf[30];
    char m_Gender;
    unsigned int m_Age;
    char m_AccountType[10];
    char m_AccountNumber[11];
    char m_CIFNumber[11];

public:
    void CreateAccount();
    void GetUserData();
    void AccountDetails();
};

// Displays details of the account holder
void Customer::AccountDetails()
{
    system("CLS");
    std::cout << "Name : " << m_CustomerName << std::endl
              << "S/D/H/W of : " << m_WardOf << std::endl
              << "Gender : " << m_Gender << std::endl
              << "Age : " << m_AccountNumber << std::endl
              << "Account Type : " << m_AccountType << std::endl
              << "Account Number : " << m_AccountNumber << std::endl
              << "CIF Number : " << m_CIFNumber << std::endl;
}

void Customer::GetUserData()
{
    //Cleared the screen
    system("CLS");

    std::cout << "Name : " << std::endl;
    std::cin >> m_CustomerName;
    std::cout << "S/D/H/W O : " << std::endl;
    std::cin >> m_WardOf;
    std::cout << "Gender (M/F) : " << std::endl;
    std::cin >> m_Gender;
    std::cout << "Account Type : " << std::endl;
    std::cin >> m_AccountType;
    std::cout << "Account No : " << std::endl;
    std::cin >> m_AccountNumber;

    std::cout << "Congrats, You have successfully registered your account" << std::endl
              << "Press Enter to go back to the Main Menu : " << std::endl;
    std::cin.get();
}

void Customer::CreateAccount()
{
    std::cout << "Press Enter to Create an account" << std::endl;
    std::cin.get();
    GetUserData();
}
