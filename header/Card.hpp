#pragma once
#include <iostream>

using namespace std;

class Card {
    private:
        string card_number;
        string expiration_date;
        string cvv;
        string pin;
    public:
        Card();
        ~Card();
        void set_card(string card_number, string expiration_date, string cvv);
        void display_card();
};