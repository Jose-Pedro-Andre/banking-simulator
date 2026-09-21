#pragma once

#include <iostream>

using namespace std;

class Client;
class InfoClient;

class Account {
    private:
        string number_account;
        string number_IBAN;
        string credits;
        string debts;
        InfoClient *info_client;
        Account();
        ~Account();
        void create_account();
        void display_account_info();
        friend Client;
};