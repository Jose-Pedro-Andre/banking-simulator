#include "../header/Address.hpp"

Address::Address():
    street(""),
    city(""),
    state(""),
    country("")
{}

Address::~Address() {}

void Address::set_address() {
    cout << "Provícia: ";
    getline(cin, state, '\n');
    cin.ignore();
    cout << "Cidade: ";
    getline(cin, city, '\n');
    cin.ignore();
    cout << "Rua: ";
    getline(cin, street, '\n');
    cin.ignore();
    cout << "País: ";
    getline(cin, country, '\n');
    cin.ignore();
}

void Address::display_address() {
    cout << "Rua: " << street << endl;
    cout << "Cidade: " << city << endl;
    cout << "Provícia: " << state << endl;
    cout << "País: " << country << endl;
}