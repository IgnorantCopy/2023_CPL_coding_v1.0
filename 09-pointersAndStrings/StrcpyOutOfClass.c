//
// Created by Ignorant on 2023/12/4.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Strcpy1(char *dest, const char *src);
void Strcpy2(char *dest, const char *src);
int main() {
    const char *src = "Hello World!";
    char *dest = malloc(strlen(src) + 1);
//    Strcpy1(dest, src);     //""
//    Strcpy2(dest, src);     //"%s"
    // explanation
    printf("src: %s\n", src);
    // move to '\0'
    src += strlen("Hello World!");
    // move one step further
    src++;
    printf("%s", src);  // it is the string of the last formation!!!
    free(dest);
    return 0;
}
void Strcpy1(char *dest, const char *src) {
    while ((*dest = *src) != 0) {
        src++;
        dest++;
    }
    printf("%s\n", src);
}

void Strcpy2(char *dest, const char *src) {
    while ((*dest++ = *src++) != 0);
    printf("%s\n", src);
}
