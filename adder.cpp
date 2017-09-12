#include <cstdio>

#include <bitset>
using namespace std;

int debug_add(int a, int b) {
    if(a == 0) {
        return b;
    } else {
        bitset<8> x(a);
        bitset<8> y(b);

        printf("Start %d + %d!\n", a, b);
        printf("%c = %s -> %d\n", 'a', x.to_string().c_str(), a);
        printf("%c = %s -> %d\n", 'b', y.to_string().c_str(), b);
        puts("");

        while(b != 0) {
            int carry = a & b;
            bitset<8> z(carry);
            printf("%-5s =   a & b    = %s -> %d\n", "carry", z.to_string().c_str(), carry);

            a ^= b; //addition occurs with XOR operation
            x = bitset<8>(a);
            printf("%-5c =   a ^ b    = %s -> %d\n", 'a', x.to_string().c_str(), a);

            b = carry << 1; //carry is shifted
            y = bitset<8>(b);
            printf("%-5c = carry << 1 = %s -> %d\n", 'b', y.to_string().c_str(), b);

            puts("");
        }

        return a;
    }
}
int add(int a, int b) {
    if(a == 0) {
        return b;
    } else {
        while(b != 0) {
            int carry = a & b;
            a ^= b;
            b = carry << 1;
        }
        return a;
    }
}
