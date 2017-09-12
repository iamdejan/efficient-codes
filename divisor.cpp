#include <cstdio>
#include "adder.cpp"

int division(int dividend, const int divisor) { //dividend / divisor = result
    if(dividend == divisor) {
        return 1;
    } else if(dividend == 0 || dividend < divisor) {
        return 0;
    } else {
        int result = 1;
        int denominator = divisor;

        while(denominator < dividend) {
            denominator <<= 1;
            //printf("denominator -> %d\n", denominator);

            result <<= 1;
            //printf("result -> %d\n", result);

            //puts("");
        }

        while(denominator > dividend) {
            denominator = subtract(denominator, divisor);
            //printf("denominator -> %d\n", denominator);

            result = subtract(result, 1);
            //printf("result -> %d\n", result);

            //puts("");
        }

        return result;
    }
}
