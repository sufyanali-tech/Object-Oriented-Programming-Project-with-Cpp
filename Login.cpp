#include "Login.h"
#include <iostream>
#include <vector>
using namespace std;

vector<Login> logins;

void Login ::make_account()
{
    cout << "Enter EMAIL and PASSWORD to Sign up into Account \n";
    cout << "Email Should be in this Form abc@gmail.com ...\n\n\n";
    while (true)
    {
        cout << "Enter the Email Address : ";
        cin >> email;
        if (isGmail(email))
        {
            break;
        }
        else
        {
            system("cls");
            cout << "Invalid Email Address !!!! \n\n";
            cout << "Make Sure Your Email in this Form for example --> abc@gmail.com ...\n\n";
        }
    }
    cout << "Enter the Password : ";
    cin >> password;
}
bool Login :: check_account(string input_email, int input_password)
{
    for (int i = 0; i < logins.size(); i++)
    {
        if (logins[i].email == input_email && logins[i].password == input_password)
        {
            cout << "\n\n----------------------------------\n";
            cout << "|      LOGIN SUCCESSFULLY        |\n";
            cout << "----------------------------------\n\n";

            system("pause");

            return true;
        }
    }
    system("cls");

    cout << "---------------------------------------------\n";
    cout << "|Invalid Email and Password TRY AGAIN.......|\n";
    cout << "---------------------------------------------\n";

    return false;
}
bool Login :: isGmail(string email)
{
    string domain = "@gmail.com";
    if (email.length() >= domain.length())
    {
        return (email.substr(email.length() - domain.length()) == domain);
    }
    return false;
}
