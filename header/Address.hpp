#pragma once
#include <iostream>

using namespace std;

class InfoClient;

class Address {
    private:
        string street;
        string city;
        string state;
        string country;
        Address();
        ~Address();
        void set_address();
        void display_address();
        friend  InfoClient;
};