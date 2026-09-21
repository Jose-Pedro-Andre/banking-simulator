#pragma once
#include <iostream>

#include "../header/Account.hpp"
#include "../header/Bank.hpp"


class Client {
    private:
        friend class Bank;
        Account *account;
        Client();
        ~Client();
};