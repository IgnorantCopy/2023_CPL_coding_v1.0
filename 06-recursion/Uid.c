//
// Created by Ignorant on 2023/11/12.
//

// https://pythontutor.com/render.html

/*
 * static local variable
 */

#include <stdio.h>

// UID: unique identifier
int GenerateUID();
int main() {
    for (int i = 0; i < 10; i++) {
        printf("ID:%d\n", GenerateUID());
    }
    return 0;
}

int GenerateUID() {
    static int id = 0;
    return id++;
}
