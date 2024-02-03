#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../Iserver.h"
#include "../mock_server.h"
#include "../atm.h"


TEST(atm_class,constructor_test){
    EXPECT_EQ(1,1);
    EXPECT_EQ(2,2);


}

TEST(atm_class,functions_test){
    EXPECT_EQ(1,1);
    

    mock_server mock_server_obj;
    
    atm my_atm(&mock_server_obj);

    EXPECT_CALL(mock_server_obj,connect()).Times(1);
    //EXPECT_CALL(mock_server_obj,select_account_number()).Times(1);
    EXPECT_CALL(mock_server_obj,disconnect()).Times(1);
    int a =1000;
    my_atm.deduct(a);

}