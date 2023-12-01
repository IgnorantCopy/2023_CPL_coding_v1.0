//
// Created by Ignorant on 2023/11/24.
//

#include <stdio.h>
#include <stdlib.h>
#define LEN 5

/*
 * 1.In expressions, the name of an array is a synonym for the address of its first element.
 * 2.But an array name is not a variable.
 */

void SelectionSort(int arr[], int len);

int GetMinIndex(const int arr[], int left, int right);

void WrongSwap(int left, int right);

void Swap(int *left, int *right);

void Print(const int arr[], int len);

int main() {
    int len = 0;
    scanf("%d", &len);
    /*
     * void *malloc(size_t size)
     *  1.stblib.h
     *  2.return type: (void *)
     *  3.type: (int *) can be omitted
     *  4.sizeof(int)
     *  5.size_t unsigned long/long long int: avoid negative numbers
     */
    int *numbers = malloc(len * sizeof(*numbers));
    // NULL: null pointer ((void *)0)
    if (numbers == NULL) {
        return 0;
    }
    for (int i = 0; i < len; i++) {
        scanf("%d", numbers + i);
    }
//    int numbers[LEN] = {15, 78, 23, 8, 10};
    Print(numbers, len);
    // (): function-call operator
//    SelectionSort(numbers, LEN); ==> recommended
    SelectionSort(&numbers[0], len);
    Print(numbers, len);
    // void free(void *ptr)
    free(numbers);
    return 0;
}
// arr: the (copy of the) address of the first element of
// int *arr <=> int arr[]
// []: subscript operator
void SelectionSort(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        int minIndex = GetMinIndex(arr, i, len);
//        Swap(&arr[i], &arr[minIndex]);
        // &arr[i] <=> &(*(arr + i)) <=> arr + i
        Swap(arr + i, arr + minIndex);
    }
}
// const int arr[] <=> const int *arr
int GetMinIndex(const int arr[], int left, int right) {
    int min = arr[left];
    int minIndex = left;
    for (int i = left + 1; i < right; i++) {
        // arr[i] <=> *(arr + i) <=> *(i + arr) <=> i[arr]
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }
    return minIndex;
}
void WrongSwap(int left, int right) {
    int temp = left;
    left = right;
    right = temp;
}

void Swap(int *left, int *right) {
    int temp = *left;
    *left = *right;
    *right = temp;
}

void Print(const int arr[], int len) {
    printf("\n");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}
