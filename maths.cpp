#include <adder.cpp>

typedef unsigned long long U64;

U64 factorial(int a) {
    int temp = 1;

    for(int i = 1; i <= a; i = add(i, 1)) {
        temp = multiply(temp, i);
    }

    return temp;
}
