#include "../header/InfoClient.hpp"

InfoClient::InfoClient():
    name(""),
    surname(""),
    email(""),
    phone_number(""),
    address(nullptr)
{}

InfoClient::~InfoClient() {
    delete address;
}

void InfoClient::set_info_client() {
    cout << "Digite o nome do cliente: ";
    cin >> name;
    cout << "Digite o sobrenome do cliente: ";
    cin >> surname;
    cout << "Digite o email do cliente: ";
    cin >> email;
    cout << "Digite o telefone do cliente: ";
    cin >> phone_number;
    address = new Address();
    address->set_address();
}

void InfoClient::display_info_client() {
    cout << "Nome: " << name << endl;
    cout << "Sobrenome: " << surname << endl;
    cout << "Email: " << email << endl;
    cout << "Telefone: " << phone_number << endl;
}