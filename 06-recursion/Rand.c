//
// Created by Ignorant on 2023/11/12.
//

#include <stdio.h>

int Rand();
int main() {
    for (int i = 0; i < 10; i++) {
        printf("%d\n", Rand());
    }
    return 0;
}

int Rand() {
    static unsigned int seed = 1;
    seed = seed * 1103515245 + 12345;
    return (int) ((seed / 65536) % 32768);
}
