#pragma once
#include <iostream>

using namespace std;

class Address;
class Account;

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