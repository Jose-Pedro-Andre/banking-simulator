#include "../header/Bank.hpp"
#include "../header/Client.hpp"
#include "../header/utils.hpp"

int main() {
    Bank bank;
    // bank.setBank();
    // bank.addClient();
    // bank.displayClientsInfo();

    cout << "1 - Inserir o Cartão\n2 - Levantamento sem cartão" << endl;
    char c;
    mod_cannon_off();
    read(0, &c, 1);
    reset_terminal();
    system("clear");
    cout << c << endl;
    return 0;
}