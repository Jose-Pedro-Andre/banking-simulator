#pragma once
#include <iostream>

#include "../header/Account.hpp"

#include "../header/Card.hpp"
#include "../header/Bank.hpp"
#include "../header/InfoClient.hpp"

class Client {
    private:
        friend class Bank;
        Account *account;
        Client();
        ~Client();
};