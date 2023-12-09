//
// Created by Ignorant on 2023/12/8.
//

#include <stdio.h>
#include <string.h>
#define LEN 10

void SelectionSort(const char *arr[], int len);
int GetMinIndex(const char *arr[], int begin, int end);
void Swap(const char **str1, const char **str2);
void Print(const char * const arr[], int len);
int main() {
    const char *musicians[] = {"Luo Dayou", "Cui Jian", "Dou Wei", "Zhang Chu", "Wan Qing",
                         "Li Zhi", "Yao", "ZuoXiao", "ErShou Rose", "Hu Mage"};
    SelectionSort(musicians, LEN);
    Print(musicians, LEN);
    return 0;
}
void SelectionSort(const char *arr[], int len) {
    for (int i = 0; i < len; i++) {
        int minIndex = GetMinIndex(arr, i, len);
        Swap(arr + i, arr + minIndex);
    }
}
int GetMinIndex(const char *arr[], int begin, int end) {
    const char *min = arr[begin];
    int minIndex = begin;
    for (int i = begin + 1; i < end; i++) {
        if (strcmp(arr[i], min) < 0) {
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}

void Swap(const char **str1, const char **str2) {
    const char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

// char arr[]: char *arr
// char *arr[]: char **arr
// the first const: the pointer cannot be modified; the second const: the value of the pointer cannot be modified
void Print(const char * const arr[], int len) {
    for (int i = 0; i < len; i++) {
        // arr[i]: *(arr + i)
        printf("%s ", arr[i]);
    }
    printf("\n");
}
