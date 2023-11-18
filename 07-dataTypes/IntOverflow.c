//
// Created by Ignorant on 2023/11/17.
//


#include <stdio.h>
#include <limits.h>

int main() {
    // signed overflow: undefined
    // unsigned overflow: wrap(回绕)
    printf("UINT_MAX = %u\n", UINT_MAX);
    unsigned int max = UINT_MAX;
    unsigned int one = 1U;
    unsigned int two = 2U;
    printf("max + one = %u\n", max + one);
    printf("one - two = %u\n", one - two);
    return 0;
}
