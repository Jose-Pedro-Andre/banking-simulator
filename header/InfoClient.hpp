#pragma once
#include <iostream>
#include "Address.hpp"
#include "Account.hpp"

using namespace std;

class InfoClient {
    private:
        string name;
        string surname;
        string email;
        string phone_number;
        Address *address;
        InfoClient();
        ~InfoClient();
        void set_info_client();
        void display_info_client();
        friend Account;
};