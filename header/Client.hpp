#pragma once
#include <iostream>

#include "../header/Account.hpp"
#include "../header/Bank.hpp"
#include "../header/utils.hpp"

class Client {
    private:
        friend class Bank;
        string clientId;
        Account *account;
        Client();
        ~Client();
        void diplayInfoClient();
        void setClient();
        const string &getClientId() const;
};