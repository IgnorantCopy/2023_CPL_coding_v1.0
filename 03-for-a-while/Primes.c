//
// Created by Ignorant on 2023/10/13.
//


#include <stdio.h>
#include <math.h>

int main() {
    int max = 0;
    scanf("%d", &max);
    int isPrime;
    for (int i = 2; i <= max; i++) {
        isPrime = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d\n", i);
        }
    }
    return 0;
}
