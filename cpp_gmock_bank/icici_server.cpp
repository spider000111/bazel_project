#include "icici_server.h"
#include <iostream>

bool icici::connect(){
    printf("called connect inside icici server \n");
    return true;
}
    
void icici::select_account_number(int a){
    printf("called select_account_number inside icici server %d \n",a);
}

bool icici::add_balance(int a){
    printf("called add_balance inside icici server %d \n",a);
    return true;
}

bool icici::deduct_balance(int a){
    printf("called deduct_balance inside icici server %d \n",a);
    return true;
}

int icici::get_balance(){
    printf("called get_balance inside icici server \n");
    return 5000;
}

bool icici::disconnect(){
    printf("called disconnect inside icici server \n");
}