//
// Created by Ignorant on 2023/10/8.
//


#include <stdio.h>

#define LEN 5

int main() {
    int numbers[LEN] = {0};
    //input
    //numbers[i]: variable (storage, object) lvalue(左值)
    //scope since C99
    for (int i = 0; i < LEN; i++) {
        scanf("%d", &numbers[i]);
    }
    int min = numbers[0];
    for (int i = 1; i < LEN; i++) {
        min = (min > numbers[i]) ? numbers[i] : min;
    }
    printf("%d", min);
    return 0;
}
