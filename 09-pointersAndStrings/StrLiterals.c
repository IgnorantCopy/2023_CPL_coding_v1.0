//
// Created by Ignorant on 2023/12/1.
//


#include <stdio.h>

int main() {
    // string literal
    // char msg[] = {'H', 'e', ..., '\0'};
    char msg[] = "Hello World!";
    msg[0] = 'N';
    printf("%s\n", msg);

    // maybe stored in read-only memory
    char *ptr_msg = "Hello World!";
    // UB
    // SIGSEG
    ptr_msg[0] = 'N';
    printf("%s\n", ptr_msg);

    return 0;
}
