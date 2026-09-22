#include "../header/Address.hpp"

Address::Address():
    street(""),
    city(""),
    state(""),
    country("")
{}

Address::~Address() {}

void Address::set_address() {
    cout << "Província: ";
    getline(cin, state);
    cout << "Cidade: ";
    getline(cin, city);
    cout << "Rua: ";
    getline(cin, street);
    cout << "País: ";
    getline(cin, country);
}

void Address::display_address() {
    cout << "      Rua: " << street << endl;
    cout << "      Cidade: " << city << endl;
    cout << "      Província: " << state << endl;
    cout << "      País: " << country << endl;
}