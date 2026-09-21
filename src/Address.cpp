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
    cin >> state;
    cout << "Cidade: ";
    cin >> city;
    cout << "Rua: ";
    cin >> street;
    country = "Angola";
}

void Address::display_address() {
    cout << "Rua: " << street << endl;
    cout << "Cidade: " << city << endl;
    cout << "Provícia: " << state << endl;
    cout << "País: " << country << endl;
}