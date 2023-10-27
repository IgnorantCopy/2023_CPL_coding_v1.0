//
// Created by Ignorant on 2023/10/20.
//

#include <stdio.h>
#define LEN1 5
#define LEN2 6

void Merge(const int arr1[], const int arr2[], int left, int right);
int main() {
    int arr1[LEN1] = {1, 3, 5, 7, 9};
    int arr2[LEN2] = {0, 2, 4, 6, 8, 10};
    int left = 0;
    int right = 0;
    Merge(arr1, arr2, left, right);
    return 0;
}

void Merge(const int arr1[], const int arr2[], int left, int right) {
    while (left < LEN1 && right < LEN2) {
        if (arr1[left] <= arr2[right]) {
            printf("%d ", arr1[left++]);
        } else {
            printf("%d ", arr2[right++]);
        }
    }
    while (right < LEN2) {
        printf("%d ", arr2[right++]);
    }
    while (left < LEN1) {
        printf("%d ", arr1[left++]);
    }
}
