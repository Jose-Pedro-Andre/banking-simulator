#pragma once

#include <iostream>
#include "Client.hpp"
#include "InfoClient.hpp"

using namespace std;

class Account {
    private:
        string number_account;
        string number_IBAN;
        string credits;
        string debts;
        InfoClient *info_client;
        Account(){};
        ~Account() {};
        void create_account();
        void display_account_info();
        friend Client;

};