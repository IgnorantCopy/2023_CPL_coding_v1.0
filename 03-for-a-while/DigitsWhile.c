//
// Created by Ignorant on 2023/10/13.
//


#include <stdio.h>

int main() {
    int num = 0;
    scanf("%d", &num);
    int numOfDigits = 1;
    if (num == 0) {
        numOfDigits = 1;
    } else {
        while (num / 10 != 0) {
            num /= 10;
            numOfDigits++;
        }
    }
    printf("Number of digits is %d", numOfDigits);
    return 0;
}
