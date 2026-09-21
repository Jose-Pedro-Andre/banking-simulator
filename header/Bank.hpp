#pragma once
#include <iostream>
#include <string>
#include <map>

using namespace std;

class Client;

class Bank {
    private:
        string bankName;
        string bankId;
        map<string, Client* > clients;
    public:
        Bank();
        ~Bank();
        void setBank();
        void addClient();
        void displayClientsInfo();
};