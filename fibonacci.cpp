#include "adder.cpp"

U64 fibonacci(int num) {
    if(num == 0 || num == 1) {
        return num;
    } else {
        int left, mid, right;
        left = 0;
        mid = 1;
        for(int i = 2; i <= num; i = add(i, 1)) {
            right = add(left, mid);
            left = mid;
            mid = right;
        }
        return mid;
    }
}
