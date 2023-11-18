//
// Created by Ignorant on 2023/11/17.
//


#include <stdio.h>
#include <limits.h>

int main() {
    // use char only for representing characters
    // wrong: char ch = 150;
    unsigned char ch = 150;     // unsigned char:0 ~ 255
    int i = 900;
    printf("i / ch = %d\n\n", i / ch);

    // CHAR_MIN = -128
    // CHAR_MAX = 127
    printf("CHAR_MIN = %d\n", CHAR_MIN);
    printf("CHAR_MAX = %d\n", CHAR_MAX);
    return 0;
}
