#include <iostream>
#include "Login.h"
#include "Flight_Type.h"
#include "Economy_Bussiness_First_Person.h"
#include <vector>
using namespace std;

extern vector<Login> logins;

Flight flight;

int main()
{
    int take_choice_from_user, check_password;
    string take_choice_for_account,check_email;
    bool condition = false;

    while (true)
    {
        system("cls");

        cout << "\t\t --------------------------------------------------\n";
        cout << "\t\t |                                                |\n";
        cout << "\t\t |                                                |\n";
        cout << "\t\t |                                                |\n";
        cout << "\t\t |    WELCOME TO THE FLIGHT BOOKING APPLICATION   |\n";
        cout << "\t\t |                                                |\n";
        cout << "\t\t |                                                |\n";
        cout << "\t\t |                                                |\n";
        cout << "\t\t --------------------------------------------------\n\n";

        cout << "DO YOU HAVE ALREADY ACCOUNT ?  yes/no\n";
        cin >> take_choice_for_account;
        Login login;
        // Check the condition if account is not made then make account the account and also Log in
        if (take_choice_for_account == "no" || take_choice_for_account == "No")
        {
            login.make_account();
            logins.push_back(login);
            cout << "\n\n-----------------------------------------\n";
            cout << "|  YOUR ACCOUNT IS SUCCESSFULLY MADE UP |\n";
            cout << "-----------------------------------------\n\n\n";

            cout << "Please LOG IN Your Account ....\n\n";
            while (true)
            {
                cout << "Enter Your Email Address : ";
                cin >> check_email;
                cout << "Enter Your Password : ";
                cin >> check_password;
                if (login.check_account(check_email, check_password))
                {
                    if (flight.flightType())
                    {
                        break;
                    }
                    else
                    {
                        system("cls");
                        cout << "\n\n";
                        cout << "-------------------------------------------\n";
                        cout << "| THANK YOU SO MUCH FOR USING OUR SERICES |\n";
                        cout << "-------------------------------------------\n\n\n";

                        condition = true;
                        system("pause");

                        break;
                    }
                }
            }
        }
        
        // Check the Condition if Account already made then Check Email and Password

        else if (take_choice_for_account == "yes" || take_choice_for_account == "Yes")
        {
            cout << "Please LOG IN Your Account ....\n\n";
            while (true)
            {
                cout << "Enter Your Email Address : ";
                cin >> check_email;
                cout << "Enter Your Password : ";
                cin >> check_password;
                if (login.check_account(check_email, check_password))
                {
                    if (flight.flightType())
                    {
                        break;
                    }
                    else
                    {
                        system("cls");
                        cout << "\n\n";
                        cout << "-------------------------------------------\n";
                        cout << "| THANK YOU SO MUCH FOR USING OUR SERICES |\n";
                        cout << "-------------------------------------------\n\n\n";

                        condition = true;
                        system("pause");

                        break;
                    }
                }
            }
        }
        if (condition == true)
        {
            break;
        }
    }
    return 0;
}
