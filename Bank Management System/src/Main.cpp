#include <iostream>
#include <stdlib.h>
#include "BranchDetails.h"
#include "Interface.h"
#include "Customer.h"
#include "UserGuide.h"

int main()
{
   //Cleared the screen
   system("CLS");
   Interface interface;
   interface.MainMenu();  //Implicitly called Customer::CreateAccount()

   //Implicit call pathway :
   //MainMenu() -> BranchDetails()->CreateAccount()->GetUserData()-> Account Details()
} 
