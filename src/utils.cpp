
#include <string>
#include <iostream>
#include <sstream>
#include <random>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

using namespace std;


static struct termios oldt;


void mod_cannon_off(void) {
    struct termios newt;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
}

void reset_terminal(void) {
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

string generateIDCliente() {
    random_device rd;
    mt19937_64 gen(rd());
    std::stringstream ss;
    uniform_int_distribution<long long> distrib(100000L, 999999L); 

    int random_num = distrib(gen);
    return to_string(random_num);
}

string generateIDConta(){
    random_device rd;
    mt19937_64 gen(rd());
    std::stringstream ss;
    uniform_int_distribution<long long> distrib(100000000000L, 999999999999L);
    long long random_num = distrib(gen);
    return to_string(random_num);
}
