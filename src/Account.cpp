#include "../header/Account.hpp"
#include "../header/InfoClient.hpp"
#include "../header/utils.hpp"

Account::Account() {
    number_account = "";
    number_IBAN = "";
    credits = "00.00";
    debts = "00.00";
    info_client = nullptr;
}

Account::~Account() {
    delete info_client;
}

void Account::create_account() {
    number_account = generateIDConta();
    number_IBAN = generateIDConta();
    info_client = new InfoClient();
    info_client->set_info_client();
}

void Account::display_account_info() {
    cout << "  Número da conta: " << number_account << endl;
    cout << "  Número do IBAN: " << number_IBAN << endl;
    cout << "  Créditos: " << credits << endl;
    cout << "  Dívidas: " << debts << endl;
    info_client->display_info_client();
}