#include "../header/Client.hpp"

Client::Client(){};
Client::~Client()
{
    delete account;
};
void Client::setClient(){
    this->clientId = generateIDCliente();
    this->account = new Account();
    account->create_account();
};
void Client::diplayInfoClient(){
    
    cout << "Client ID: " << getClientId() << endl;
    account->display_account_info();
}

const string &Client::getClientId() const {
    return this->clientId;
}