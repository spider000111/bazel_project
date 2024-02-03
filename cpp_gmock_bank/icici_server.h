#pragma once
#include "Iserver.h"

class icici:public Iserver{

public:
    bool connect();
    void select_account_number(int a);
    bool add_balance(int a);
    bool deduct_balance(int amount,int account);
    int get_balance();
    bool disconnect();


};