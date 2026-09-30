#include "../header/Bank.hpp"
#include "../header/Client.hpp"
#include "../header/utils.hpp"

int main() {
    Bank bank;
    bank.setBank();
    bank.addClient();
    bank.displayClientsInfo();

    return 0;
}