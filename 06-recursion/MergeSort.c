//
// Created by Ignorant on 2023/11/17.
//

#include <stdio.h>
#define LEN 7

void MergeSort(int nums[], int left, int right);
void Merge(int nums[], int left1, int right1, int right2);
int main() {
    int numbers[LEN] = {38, 27, 43, 3, 9, 82, 10};
    for (int i = 0; i < LEN; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    MergeSort(numbers, 0, LEN - 1);
    for (int i = 0; i < LEN; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
void MergeSort(int nums[], int left, int right) {
    if (left == right) {
        return;
    }
    int mid = (left + right) / 2;
    MergeSort(nums, left, mid);
    MergeSort(nums, mid + 1, right);
    Merge(nums, left, mid, right);
}

void Merge(int nums[], int left1, int right1, int right2) {
    int l1 = left1;
    int l2 = right1 + 1;
    int copy[LEN] = {0};
    int copyIndex = 0;
    while (l1 <= right1 && l2 <= right2) {
        if (nums[l1] <= nums[l2]) {
            copy[copyIndex++] = nums[l1++];
        } else {
            copy[copyIndex++] = nums[l2++];
        }
    }
    while (l1 <= right1) {
        copy[copyIndex++] = nums[l1++];
    }
    while (l2 <= right2) {
        copy[copyIndex++] = nums[l2++];
    }
    copyIndex = 0;
    for (int i = left1; i <= right2; i++) {
        nums[i] = copy[copyIndex++];
    }
}
