#pragma once
#include <string>
using namespace std;

class Login
{

    private:

    string email;
    
    int password;

    public:


    void make_account();

    bool isGmail(string a);

    bool check_account(string email, int password);

};