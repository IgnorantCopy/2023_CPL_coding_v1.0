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
    // count (and print out) how many times Fibonacci() has been called
    static int count = 1;
    printf("count = %d\n", count++);
    // memo(备忘录): reduce the repetition
    static long long int fib[100] = {0};
    if (n <= 1) {
        return n;
    }
    if (fib[n]) {
        return fib[n];
    }
    fib[n] = Fibonacci(n - 1) + Fibonacci(n - 2);
    return fib[n];
}
