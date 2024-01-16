#include "gtest/gtest.h"
#include "../stack.h"

class test_stack: public::testing::Test{
    protected:
    test_stack(){
        std::cout<<"set up fixture executed \n"<<std::endl;
    }

    ~test_stack(){
        std::cout<<"teardown fixture executed \n"<<std::endl;
    }
};

TEST(STACK,create_first_element){

    stack *ptr = create_first_element(4);

    EXPECT_EQ(read_element_at_index(ptr,0),4);

    EXPECT_NE(ptr,nullptr);

    EXPECT_EQ(ptr->next,nullptr);

}
TEST(STACK,add_and_read){

    stack *ptr = create_first_element(4);

    EXPECT_EQ(read_element_at_index(ptr,0),4);

    add(&ptr,10);

    EXPECT_EQ(read_element_at_index(ptr,1),10);

    add(&ptr,11);
    EXPECT_EQ(read_element_at_index(ptr,2),11);

    EXPECT_EQ(read_element_at_index(ptr,0),4);
}

TEST(STACK,add_and_read_unalloc){

    stack *ptr = create_first_element(4);

    EXPECT_EQ(read_element_at_index(ptr,0),4);

    add(&ptr,10);

    EXPECT_EQ(read_element_at_index(ptr,1),10);

    add(&ptr,11);
    EXPECT_EQ(read_element_at_index(ptr,2),11);

    EXPECT_EQ(read_element_at_index(ptr,0),4);

}

TEST(STACK,need_to_reqrite_this){

    stack *ptr = nullptr;

    add(&ptr,4);

    //printf("%d",read_element_at_index(ptr,0));
    //EXPECT_EQ(read_element_at_index(ptr,0),4);

    add(&ptr,10);

    //EXPECT_EQ(read_element_at_index(ptr,1),10);

    add(&ptr,11);
    //EXPECT_EQ(read_element_at_index(ptr,2),11);

    //EXPECT_EQ(read_element_at_index(ptr,0),4);

}