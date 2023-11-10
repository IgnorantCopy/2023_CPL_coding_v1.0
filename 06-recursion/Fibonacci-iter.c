//
// Created by Ignorant on 2023/11/10.
//


#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    long long fib0 = 0L;
    long long fib1 = 1L;
    long long fib2 = 0L;
    for (int i = 2; i < n; i++) {
        fib2 = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib2;
    }
    printf("%lld", fib2);
    return 0;
}
