#pragma once
#include <iostream>
#include "InfoClient.hpp"

using namespace std;

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