#include <iostream>
#include "Customer.h"

class BranchDetails
{
private:
    const char* m_Branch; 
    unsigned int m_BranchCode;  
    unsigned int m_PostOffice;
    const char* m_IFSC;
    const char* m_District;

public:
    // Constructor for displaying the branch details
    BranchDetails()
        :m_Branch("ADB Pune"), m_BranchCode(03263), m_PostOffice(41005), m_IFSC("SBIN0032638"), m_District("Pune")
    {
        std::cout << "\t\t\t\t\t\t\t\t\t -------------- " << std::endl
                  << "\t\t\t\t\t\t\t\t\t|BRANCH DETAILS| " << std::endl
                  << "\t\t\t\t\t\t\t\t\t --------------\n\n " << std::endl
                  << "\n\n\t\t\t\t\t\t\tBranch Code : " << m_BranchCode << std::endl
                  << "\n\t\t\t\t\t\t\tPO : " << m_PostOffice << std::endl
                  << "\n\t\t\t\t\t\t\tIFSC : " << m_IFSC << std::endl
                  << "\n\t\t\t\t\t\t\tDistrict : " << m_District << std::endl;

                  Customer customer;
                  customer.CreateAccount();
    }
};
