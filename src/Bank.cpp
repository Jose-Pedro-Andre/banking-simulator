#include "../header/Bank.hpp"
#include "../header/Client.hpp"
#include <cstdlib>
#include <limits>

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
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void Bank::addClient() {
    Client *client = new Client();
    client->setClient();
    clients[client->getClientId()] = client;
}

void Bank::displayClientsInfo() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    cout << "========================================" << endl;
    cout << "              DADOS DO BANCO" << endl;
    cout << "========================================" << endl;
    cout << "Nome do banco: " << bankName << endl;
    cout << "ID do banco: " << bankId << endl;
    cout << "========================================" << endl << endl;

    cout << "========================================" << endl;
    cout << "          CLIENTES CADASTRADOS" << endl;
    cout << "========================================" << endl;
    for (auto &pair : clients) {
        pair.second->diplayInfoClient();
        cout << "----------------------------------------" << endl;
    }
}

int main() {
    Bank bank;
    bank.setBank();
    bank.addClient();
    bank.displayClientsInfo();
    return 0;
}