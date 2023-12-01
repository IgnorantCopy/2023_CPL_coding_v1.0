//
// Created by Ignorant on 2023/12/1.
//

#include <stdio.h>

int Strlen(const char *str);

size_t StrlenStd(const char *str);
int main() {
    char msg[] = "Hello World!";
    printf("%d\n", Strlen(msg));
    printf("%zu\n", StrlenStd(msg));
    return 0;
}
int Strlen(const char *str) {
    int length = -1;
    while (*(str + ++length) != '\0');
    return length;
}

size_t StrlenStd(const char *str) {
    const char *sc;
    for (sc = str; *sc != '\0'; sc++);
    return sc - str;
}
