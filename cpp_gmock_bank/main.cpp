// Your First C++ Program
#include "icici_server.h"

#include <iostream>

int main() {
    std::cout << "Hello World!"<<std::endl;
    icici a;
    a.connect();
    a.select_account_number(1234);
    a.add_balance(100);
    a.deduct_balance(100,123);
    a.get_balance();
    a.disconnect();
    return 0;
}
