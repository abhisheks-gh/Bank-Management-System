#include <iostream>
#include <cstdlib> 



// User Interface
class Interface
{
public:
    int MainMenu();
};

// List of operations between which user can make a choice
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
                
            // Implicitly calling Customer::GetUserData()
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
            // Customer::AccountDetails()
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



// Userguide::UserGuide()
class UserGuide
{
public:
    // Displays "How to access the application \n"
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

        Customer customer;
        customer.CreateAccount();  
    }
};




// End-users information
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

// Displays account details
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

// Asks user for required fields while creating / updating the account
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

// Implicitly calling Customer::GetUserData()
void Customer::CreateAccount()
{
    std::cout << "Press Enter to Create an account" << std::endl;
    std::cin.get();
    GetUserData();
}




// Branch Details
class BranchDetails
{
private:
    const char* m_Branch; 
    unsigned int m_BranchCode;  
    unsigned int m_PostOffice;
    const char* m_IFSC;
    const char* m_District;

public:
    BranchDetails()
        :m_Branch("Pune"), m_BranchCode(03263), m_PostOffice(41005), m_IFSC("SBIN0032638"), m_District("Pune")
    {
        std::cout << "\t\t\t\t\t\t\t\t\t -------------- " << std::endl
                  << "\t\t\t\t\t\t\t\t\t|BRANCH DETAILS| " << std::endl
                  << "\t\t\t\t\t\t\t\t\t --------------\n\n " << std::endl
                  << "\n\n\t\t\t\t\t\t\tBranch Code : " << m_BranchCode << std::endl
                  << "\n\t\t\t\t\t\t\tPO : " << m_PostOffice << std::endl
                  << "\n\t\t\t\t\t\t\tIFSC : " << m_IFSC << std::endl
                  << "\n\t\t\t\t\t\t\tDistrict : " << m_District << std::endl;
    }
};




int main()
{
   // Cleared the screen
   system("CLS");
   Interface interface;
   // Implicitly called Customer::CreateAccount()
   interface.MainMenu();  

   // Order in which implicit calls are generated:
   // MainMenu() -> BranchDetails()->CreateAccount()->GetUserData()-> Account Details()
} 