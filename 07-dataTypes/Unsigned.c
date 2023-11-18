//
// Created by Ignorant on 2023/11/17.
//


#include <stdio.h>

int main() {
    int array[] = {0, 1, 2, 3, 4};
    int i = -1;
    size_t size = sizeof array;    //typedef unsigned long long int size_t
    printf("The size of array is %zu\n", size);
    if (i <= size) {    // signed ==> unsigned
        printf("i <= sizeof array\n");
    } else {
        printf("i > sizeof array\n");
    }
    return 0;
}
