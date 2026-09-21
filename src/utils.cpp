
#include <string>
#include <iostream>
#include <sstream>
#include <random>

using namespace std;


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
