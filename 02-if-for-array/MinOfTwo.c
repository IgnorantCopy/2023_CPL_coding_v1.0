//
// Created by Ignorant on 2023/10/8.
//


#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    //conditional operator
    int min = (a > b) ? b : a;
    printf("%d", min);
    return 0;
}
