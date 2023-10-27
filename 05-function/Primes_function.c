//
// Created by Ignorant on 2023/10/27.
//


#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool IsPrime(int num);

int main() {
    int max = 0;
    scanf("%d", &max);
    for (int i = 2; i <= max; i++) {
        if (IsPrime(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

bool IsPrime(int num) {
    for (int j = 2; j <= sqrt(num); j++) {
        if (num % j == 0) {
            return false;
        }
    }
    return true;
}