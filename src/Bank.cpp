#include "../header/Bank.hpp"
#include "../header/Client.hpp"

Bank::Bank(): bankName(""), bankId("") {}

Bank::~Bank() {
    for (auto &pair : clients) {
        delete pair.second;
    }
}

void Bank::setBank() {
    cout << "Nome do banco: ";
    cin >> bankName;
    cout << "ID do banco: ";
    cin >> bankId;
}

void Bank::addClient() {
    Client *client = new Client();
    client->setClient();
    clients[client->getClientId()] = client;
}

void Bank::displayClientsInfo() {
    for (auto &pair : clients) {
        pair.second->diplayInfoClient();
    }
}

int main() {
    Bank bank;
    bank.setBank();
    bank.addClient();
    bank.displayClientsInfo();
    return 0;
}