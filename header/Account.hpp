#pragma once

#include <iostream>
#include "../header/Client.hpp"

using namespace std;

class Account {
    private:
        string number_account;
        string number_IBAN;
        string credits;
        string debts;
        Account(){};
        ~Account() {};
        void create_account();
        void display_account_info();
        friend Client;
};