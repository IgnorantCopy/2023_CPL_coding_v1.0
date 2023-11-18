//
// Created by Ignorant on 2023/11/17.
//


#include <stdio.h>
#include <limits.h>

int main() {
    double pi = 3.14159;
    // obtain its fractional part
    double fraction = pi - (int)pi;
    printf("%f\n", fraction);

    int num = 100000000;    // (9 digits)
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    // wrong: long long llint = num * num;
    long long llint = (long long)num * num;
    printf("i = %lld\n", llint);
    return 0;
}
