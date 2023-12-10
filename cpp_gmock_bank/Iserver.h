#pragma once

class Iserver{

public:
    virtual bool connect() = 0;
    virtual void select_account_number(int a) = 0;
    virtual bool add_balance(int a) = 0;
    virtual bool deduct_balance(int a) = 0;
    virtual int get_balance() = 0;
    virtual bool disconnect() = 0;


};