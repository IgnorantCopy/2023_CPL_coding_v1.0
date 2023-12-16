//
// Created by Ignorant on 2023/12/15.
//

#include "stdio.h"
#include "stdlib.h"
#include "limits.h"
#include "string.h"

// void qsort( void *ptr, size_t count, size_t size, int (*comp)(const void *, const void *) );

typedef int (*CompareFunction)(const void *, const void *);

int CompareInt(const void *num1, const void *num2);
void PrintInt(const int *nums, int length);
int CompareStr(const void *str1, const void *str2);
void PrintStr(const char *str[], int count);
int main() {
    int nums[] = {-2, 99, 0, -743, 2, INT_MIN};
    int size_of_nums = sizeof nums / sizeof(nums[0]);
    CompareFunction comp = CompareInt;
    PrintInt(nums, size_of_nums);
    qsort(nums, size_of_nums, sizeof(nums[0]), comp);
    PrintInt(nums, size_of_nums);
    char *names[] = {
            "Luo Dayou",
            "Cui Jian",
            "Dou Wei",
            "Zhang Chu",
            "Wan Qing",
            "Li Zhi",
            "Yao",
            "ZuoXiao",
            "ErShou Rose",
            "Hu Mage"
    };
    int size_of_names = sizeof names / sizeof(*names);
    comp = CompareStr;
    PrintStr(names, size_of_names);
    qsort(names, size_of_names, sizeof(names[0]), comp);
    PrintStr(names, size_of_names);
    return 0;
}
// num1/num2: int *
int CompareInt(const void *num1, const void *num2) {
    int num1_int = *(const int *) num1;
    int num2_int = *(const int *) num2;
    return (num1_int > num2_int) - (num1_int < num2_int);
}
void PrintInt(const int *nums, int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
// str1/str2: char **
int CompareStr(const void *str1, const void *str2) {
    const char *const *pp1 = str1;
    const char *const *pp2 = str2;
    return strcmp(*pp1, *pp2);
}

void PrintStr(const char *str[], int count) {
    for (int i = 0; i < count; i++) {
        printf("%s    ", str[i]);
    }
    printf("\n");
}
