//
// Created by Ignorant on 2023/11/10.
//

#include <stdio.h>

int Min(int a, int b);

int main() {
    int a = 25;
    int b = 37;
    int min = Min(a, b);
    printf("%d", min);
    return 0;
}

int Min(int a, int b) {
    return a < b ? a : b;
}
