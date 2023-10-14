//
// Created by Ignorant on 2023/10/13.
//


#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    int numOfDigits = 0;
    do {
        num /= 10;
        numOfDigits++;
    } while (num > 0);
    printf("Number of digits is %d", numOfDigits);
    return 0;
}
