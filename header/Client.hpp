#pragma once
#include <iostream>
#include <string>

#include "../header/utils.hpp"

using namespace std;

class Bank;
class Account;

class Client {
    private:
        friend Bank;
        string clientId;
        Account *account;
        Client();
        ~Client();
        void diplayInfoClient();
        void setClient();
        const string &getClientId() const;
};