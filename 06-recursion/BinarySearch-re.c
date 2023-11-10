//
// Created by Ignorant on 2023/11/10.
//

#include <stdio.h>
#define LEN 10

int BinarySearch(const int nums[], int key, int left, int right);
int main() {
    const int numbers[LEN] = {0, 1, 1, 2, 3, 3, 5, 6, 7, 8};
    int key = 0;
    scanf("%d", &key);
    printf("%d", BinarySearch(numbers, key, 0, LEN - 1));
    return 0;
}

int BinarySearch(const int nums[], int key, int left, int right) {
    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;
    if (nums[mid] > key) {
        return BinarySearch(nums, key, left, mid - 1);
    } else if (nums[mid] < key) {
        return BinarySearch(nums, key, mid + 1, right);
    }
    return mid;
}
