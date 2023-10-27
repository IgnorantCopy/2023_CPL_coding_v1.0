//
// Created by Ignorant on 2023/10/27.
//


#include <stdio.h>

void Print(char ch, int count);

int main() {
    int line = 0;
    scanf("%d", &line);
    for (int i = 0; i < line; i++) {
        Print(' ', line -1 - i);
        Print('*', 2 * i + 1);
        if (i != line - 1) {
            printf("\n");
        }
    }
    return 0;
}

void Print(char ch, int count) {
    for (int j = 0; j < count; j++) {
        printf("%c", ch);
    }
}