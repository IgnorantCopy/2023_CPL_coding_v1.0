//
// Created by Ignorant on 2023/12/1.
//


#include <stdio.h>

int Strcmp(const char *str1, const char *str2);

int StrcmpStd(const char *s1, const char *s2);

int StrncmpStd(const char *s1, const char *s2, int n);

int main() {
    const char *str1 = "hi, C";
    const char *str2 = "hi, c";
//    printf("%d", Strcmp(str1, str2));
    printf("%d", StrcmpStd(str1, str2));
//    printf("%d", Strncmp(str1, str2), 3);
    return 0;
}
int Strcmp(const char *str1, const char *str2) {
    while ((*str1 && *str2) && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    if (*str1 == '\0' && *str2 == '\0') {
        return 0;
    }
    return (*(const unsigned char *) str1) < (*(const unsigned char *) str2) ? -1 : 1;
}
int StrcmpStd(const char *s1, const char *s2) {
    for (; *s1 == *s2; s1++, s2++) {
        if (*s1 == '\0') {
            return 0;
        }
    }
    return (*(const unsigned char *) s1) < (*(const unsigned char *) s2) ? -1 : 1;
}

int StrncmpStd(const char *s1, const char *s2, int n) {
    for (; 0 < n; n--, s1++, s2++) {
        if (*s1 != *s2) {
            return (*(const unsigned char *) s1) < (*(const unsigned char *) s2) ? -1 : 1;
        } else if (*s1 == '\0') {
            return 0;
        }
    }
    return 0;
}
