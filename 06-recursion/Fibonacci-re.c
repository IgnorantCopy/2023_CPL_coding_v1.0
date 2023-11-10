//
// Created by Ignorant on 2023/11/10.
//

#include <stdio.h>

long long Fibonacci(int n);
int main() {
    int n = 0;
    scanf("%d", &n);
    printf("%lld", Fibonacci(n));
    return 0;
}

long long Fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
