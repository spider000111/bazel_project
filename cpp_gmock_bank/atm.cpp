#include "atm.h"

void atm::deduct(int a){
    myserver->connect();
    myserver->select_account_number(a);
    myserver->disconnect();
}

/*
void atm::select_account_number(int a);
bool atm::add_balance(int a) = 0;
bool atm::deduct_balance(int a) = 0;
int get_balance() = 0;
bool disconnect() = 0;


*/

