//
// Created by Ignorant on 2023/11/17.
//


#include <stdio.h>

int main() {
    // 0.1: 0.0 0011 0011 0011
    float f = 0.1F;
    float sum = 0.0F;
    for (int i = 0; i < 10; i++) {
        sum += f;
    }
    float product = f * 10;
    printf("sum  = %.15f\nmul = %.30f\n", sum, product);
    return 0;
}
