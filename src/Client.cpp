#include "../header/Client.hpp"

Client::Client(){};
Client::~Client()
{
    delete account;
};
void Client::setClient(){
    this->account = new Account();
    account->create_account();
};
void Client::diplayInfoClient(){
    account->display_account_info();
}