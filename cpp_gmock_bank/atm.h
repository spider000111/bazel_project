#pragma once
#include "Iserver.h"

class atm{
Iserver * myserver;

public:
    atm(Iserver * myserver):myserver(myserver){};

    void deduct(int amount,int account);
};