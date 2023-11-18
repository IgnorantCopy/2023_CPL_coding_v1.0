//
// Created by Ignorant on 2023/11/18.
//

#include <stdio.h>
#include <time.h>

long long Fib(int n);
int main() {
    int n = 0;
    scanf("%d", &n);
    time_t start = time(NULL);    // typedef long long time_t
    printf("%lld\n", Fib(n));
    time_t end = time(NULL);
    printf("%lld", end - start);
    return 0;
}

long long Fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    return Fib(n - 1) + Fib(n - 2);
}
