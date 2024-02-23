#include <iostream>

int Sum(int a, int b) {
    if ((a == INT_MAX && b > 0) || (b == INT_MAX && a > 0)) {
        return INT_MAX;
    }

    if ((a == INT_MIN && b <= 0) || (b == INT_MIN && a <= 0)) {
        return INT_MIN;
    }

    return a + b;
}
