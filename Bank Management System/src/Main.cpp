#include <iostream>
#include <stdlib.h>
#include "BranchDetails.h"
#include "Interface.h"
#include "Customer.h"
#include "UserGuide.h"

int main()
{
   // Cleared the screen
   system("CLS");
   
   Interface interface;
   //Implicitly called Customer::CreateAccount()
   interface.MainMenu();  

   // Order in which implicit calls are generated:
   // MainMenu() -> BranchDetails()->CreateAccount()->GetUserData()-> Account Details()
} 
