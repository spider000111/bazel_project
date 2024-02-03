#pragma once

#include "gmock/gmock.h"

#include "Iserver.h"

class mock_server:public Iserver{

public:
    MOCK_METHOD(bool,connect,(),(override));
    MOCK_METHOD(void,select_account_number,(int a),(override));
    MOCK_METHOD(bool,add_balance,(int a),(override));
    MOCK_METHOD(bool,deduct_balance,(int amount,int account),(override));
    MOCK_METHOD(int,get_balance,(),(override));
    MOCK_METHOD(bool,disconnect,(),(override));



};