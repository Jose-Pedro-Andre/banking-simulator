#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <random>
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

using namespace std;

string generateIDCliente();
string generateIDConta();
void mod_cannon_off(void);
void reset_terminal(void);