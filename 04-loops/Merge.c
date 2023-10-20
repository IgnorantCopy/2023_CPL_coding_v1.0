//
// Created by Ignorant on 2023/10/20.
//

#include <stdio.h>
#define LEN1 5
#define LEN2 6

int arr1[LEN1] = {1, 3, 5, 7, 9};
int arr2[LEN2] = {0, 2, 4, 6, 8, 10};

int main() {
    int left = 0;
    int right = 0;
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
    return 0;
}
