#include <cstdio>
#include "adder.cpp"

int multiply(int a, int b) { //simple algorithm
    if(a == 0 || b == 0) {
        return 0;
    } else if(a == 1) {
        return b;
    } else if(b == 1) {
        return a;
    } else {
        int temp = 0;
        for(int i = 1; i <= b; i = add(i, 1)) {
            temp = add(temp, a);
        }
        return temp;
    }
}
unsigned multiply(unsigned a, unsigned b) { //Russian Peasant
    if(a == 0 || b == 0) {
        return 0;
    } else if(a == 1) {
        return b;
    } else if(b == 1) {
        return a;
    } else {
        U64 temp = 0;
        while(b != 0) {
            if(b & 1) { //true if the number is odd
                temp = (unsigned)add(res, a);
            }

            a <<= 1; //a *= 2
            b >>= 1; //b /= 2
        }

        return temp;
    }
}
