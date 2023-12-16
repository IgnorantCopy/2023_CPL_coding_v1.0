//
// Created by Ignorant on 2023/12/15.
//

#include "stdio.h"
#include "string.h"
#include "stdbool.h"

// Play https://cdecl.org/ for more practice

// See https://codebrowser.dev/glibc/glibc/stdlib/stdlib.h.html#__compar_fn_t
typedef int (*__compare_fn_t)(const void *, const void *);

int CompareStr(const void *str1, const void *str2);
// CI: case insensitive
int CompareStrCI(const void *str1, const void *str2);
// int (*GetCompareFunction(bool case_sensitive))(const void *, const void *) {
__compare_fn_t GetCompareFunction(bool case_sensitive) {
    return case_sensitive ? &CompareStr : &CompareStrCI;
}
// See https://codebrowser.dev/glibc/glibc/bits/stdlib-bsearch.h.html#19
void *BinarySearch(const void *__key, const void *__base, size_t __nmemb, size_t __size, __compare_fn_t __compare);
char *names[] = {
        "Cui Jian",
        "Dou Wei",
        "ErShou Rose",
        "Hu Mage",
        "Li Zhi",
        "Luo Dayou",
        "Wan Qing",
        "Yao",
        "Zhang Chu",
        "ZuoXiao"
};

int main() {
    char *key_name_ci = "zhang chu";
    bool isSensitive = 0;
    char **name_ptr = BinarySearch(&key_name_ci, names, sizeof names / sizeof *names,
                                   sizeof *names, GetCompareFunction(isSensitive));
    if (name_ptr != NULL) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }
    return 0;
}

int CompareStr(const void *str1, const void *str2) {
    const char *const *pp1 = str1;
    const char *const *pp2 = str2;
    return strcmp(*pp1, *pp2);
}

int CompareStrCI(const void *str1, const void *str2) {
    const char *const *pp1 = str1;
    const char *const *pp2 = str2;
    return strcasecmp(*pp1, *pp2);
}

void *BinarySearch(const void *__key, const void *__base, size_t __nmemb, size_t __size, __compare_fn_t __compare) {
    size_t __l = 0;
    size_t __u = __nmemb;
    size_t __idx;
    const void *__p;
    int __comparison;
    while (__l < __u) {
        __idx = (__l + __u) / 2;
        __p = (const void *) (((const char *) __base) + (__idx * __size));
        __comparison = (*__compare) (__key, __p);
        if (__comparison < 0) {
            __u = __idx;
        } else if (__comparison > 0) {
            __l = __idx + 1;
        } else {
            return (void *) __p;
        }
    }
    return NULL;
}
