// Your First C++ Program

#include <iostream>

struct unpack_struct1 {  //this consume 4 bute
    unsigned int x : 8; //8 is bits here so this is one byte
    int y : 3;          //1st bit here will be sign bit
    //unsigned int z : 3; 
};

struct pack_struct1 {  //this consume 4 bute
    unsigned int x : 8; //8 is bits here so this is one byte
    unsigned int y : 8; 
    //unsigned int z : 3; 
}__attribute__((packed));
 
// A structure with forced alignment
struct pack_force_alinment {  //this consume 5 bytes
    unsigned int x : 8;     //1byte
    unsigned int : 0;   // because of this is called forced alienment //3 byte to align
    unsigned int y : 8;     //1 byte
}__attribute__((packed));

struct unpack_force_alinment {  //this consume 8 bytes
    unsigned int x : 8;     //1byte
    unsigned int : 0;   //this is called forced alienment //3 byte to align
    unsigned int y : 8;     //4 byte
};

int main() {

    printf("Size of unpack_struct1 is %lu bytes\n",sizeof(struct unpack_struct1));
    struct unpack_struct1 temp ;
    temp.y = 6;
    printf("value of unpack_struct1 is %d \n",temp.y );

    printf("Size of pack_struct1 is %lu bytes\n",sizeof(struct pack_struct1));

    printf("Size of pack_force_alinment is %lu bytes\n",sizeof(struct pack_force_alinment));

     printf("Size of unpack_force_alinment is %lu bytes\n",sizeof(struct unpack_force_alinment));
    return 0;
}
