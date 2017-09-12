#include <cstdio>
#include <bitset>
#include "adder.cpp"
using namespace std;

int debug_substract(int a, int b) {
    if(a != b) {
        bitset<8> x(a);
        bitset<8> y(b);

        printf("Start %d - %d!\n", a, b);
        printf("%c = %s -> %d\n", 'a', x.to_string().c_str(), a);
        printf("%c = %s -> %d\n", 'b', y.to_string().c_str(), b);
        puts("");

        while(b != 0) {
            printf("%-6s =negate (a) bit= %s -> %d\n", "~a", bitset<8>(~a).to_string().c_str(), ~a);

            int borrow = (~a) & b;
            bitset<8> z(borrow);
            printf("%-6s =   (~a) & b   = %s -> %d\n", "borrow", z.to_string().c_str(), borrow);

            a ^= b;
            x = bitset<8>(a);
            printf("%-6c =     a ^ b    = %s -> %d\n", 'a', x.to_string().c_str(), a);

            b = borrow << 1;
            y = bitset<8>(b);
            printf("%-6c =  borrow << 1 = %s -> %d\n", 'b', y.to_string().c_str(), b);

            puts("");
        }
        return a;
    } else {
        return 0;
    }
}
int substract(int a, int b) {
    if(a != b) {
        /*while(b != 0) {
            int borrow = (~a) & b;
            a ^= b;
            b = borrow << 1;
        }

        return a;*/
        return add(a, add((~b), 1));

    } else {
        return 0;
    }
}
