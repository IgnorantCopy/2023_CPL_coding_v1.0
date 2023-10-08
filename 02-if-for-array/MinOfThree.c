//
// Created by Ignorant on 2023/10/8.
//


#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int min = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        min = b;
        if (b > c) {
            min = c;
        }
    } else {
        min = a;
        if (a > c) {
            min = c;
        }
    }
    printf("%d", min);

    return 0;
}
