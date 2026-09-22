#include "../header/InfoClient.hpp"
#include "../header/Address.hpp"

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
    getline(cin, name, '\n');
    cin.ignore(); 
    cout << "Digite o sobrenome do cliente: ";
    getline(cin, surname, '\n');
    cin.ignore();
    cout << "Digite o email do cliente: ";
    getline(cin, email, '\n');
    cin.ignore();
    cout << "Digite o telefone do cliente: ";
    getline(cin, phone_number, '\n');
    cin.ignore(); 
    address = new Address();
    address->set_address();
}

void InfoClient::display_info_client() {
    cout << "Nome: " << name << endl;
    cout << "Sobrenome: " << surname << endl;
    cout << "Email: " << email << endl;
    cout << "Telefone: " << phone_number << endl;
}