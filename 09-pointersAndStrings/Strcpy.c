//
// Created by Ignorant on 2023/12/1.
//

#include <stdlib.h>
#include "stdio.h"
#include "string.h"

void Strcpy1(char *dest, const char *src);
void Strcpy2(char *dest, const char *src);
void Strcpy3(char *dest, const char *src);
void Strcpy4(char *dest, const char *src);
void Strcpy5(char *dest, const char *src);
char *StrcpyStd(char *dest, const char *src);
int main() {
    const char *src = "Hello World!";
    char *dest = malloc(strlen(src) + 1);
    Strcpy1(dest, src);
    printf("dest = %s\n", dest);
    Strcpy2(dest, src);
    printf("dest = %s\n", dest);
    Strcpy3(dest, src);
    printf("dest = %s\n", dest);
    // I do not run these codes because the value of dest will be changed.
//    Strcpy4(dest, src);
//    printf("dest = %s\n", dest);
//    Strcpy5(dest, src);
//    printf("dest = %s\n", dest);

    printf("dest = %s\n", StrcpyStd(dest, src));
    free(dest);
    return 0;
}
void Strcpy1(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
void Strcpy2(char *dest, const char *src) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0') {
        i++;
    }
}
void Strcpy3(char *dest, const char *src) {
    int i = 0;
    while ((*(dest + i) = *(src + i)) != '\0') {
        i++;
    }
}
void Strcpy4(char *dest, const char *src) {
    while ((*dest++ = *src++) != '\0');
}
// NULL: 空指针
// NUL (null) '\0' (0) :空字符
void Strcpy5(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

char *StrcpyStd(char *dest, const char *src) {
    for (char *s = dest; (*s++ = *src++) != '\0';);
    return dest;
}
