//
// Created by Ignorant on 2023/11/17.
//

#include <stdio.h>
#include "limits.h"

int main() {
    // INT_MAX = 2147483647
    // INT_MIN = 2147483648 (10 digits)
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n\n", INT_MAX);

    // UINT_MIN = 0
    // UINT_MAX = 24294967295
    printf("UINT_MIN = %u\n", 0U);
    printf("UINT_MAX = %u\n\n", UINT_MAX);

    //LONG_MIN = -2147483648
    //LONG_MAX = 2147483647
    printf("LONG_MIN = %ld\n", LONG_MIN);
    printf("LONG_MAX = %ld\n\n", LONG_MAX);

    // ULONG_MIN = 0
    // ULONG_MAX = 4294967295
    printf("UINT_MIN = %lu\n", 0UL);
    printf("UINT_MAX = %lu\n\n", ULONG_MAX);

    //LLONG_MIN = -9223372036854775808
    //LLONG_MAX = 9223372036854775807
    printf("LLONG_MIN = %lld\n", LLONG_MIN);
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    return 0;
}
