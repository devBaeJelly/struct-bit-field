#include <stdio.h>

struct Flags
{
    union
    {
        struct
        {
            unsigned short a : 3;
            unsigned short b : 2;
            unsigned short c : 7;
            unsigned short d : 4;
        };
        unsigned short e;
    };
};

int main()
{
    struct Flags f1 = { 0, };

    f1.a = 4;    // 4: 0000 0100
    f1.b = 2;    // 2: 0000 0010
    f1.c = 80;   // 80: 0101 0000
    f1.d = 15;  // 15: 0000 1111

    /*
    1111 1010 0001 0100
    */

    
    printf("%u\n", f1.e);


    return 0;
}