//
// Created by Ignorant on 2023/11/17.
//

#include <limits.h>
#include <stdio.h>

int SquareInt(int n);
int SquareDouble(double n);
int main() {
    // narrowing conversion (still in the range)
    int pi = 3.14159;
    // out of range: undefined behavior
    int j = UINT_MAX;
    // arguments; narrowing conversion
    double k = 3.14159;
    SquareInt(k);
    // return value; narrowing conversion
    int value = SquareDouble(k);
    // from int to float; narrowing conversion
    int big = 1234567890;
    float approx = big;
    printf("big = %d\t approx = %f\t diff = %d\n", big, approx, big - (int)approx);
    return 0;
}
int SquareInt(int n) {
    return n * n;
}

int SquareDouble(double n) {
    return n * n;
}
