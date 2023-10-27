//
// Created by Ignorant on 2023/10/27.
//


#include <stdio.h>

/**
 * @brief search for a key in the dictionary using binary search
 * @param key
 * @param dict
 * @param len the length of the dictionary
 * @return the index of the key if it is in the dictionary; -1 if not
 */
int BinarySearch(int key,const int dict[], int len);

int main() {
    int nums[100] = {0};
    int length = sizeof(nums) / sizeof(nums[0]);
    int key = 0;
    scanf("%d", &key);
    for (int i = 0; i < length; i++) {
        nums[i] = i;
    }
    printf("index = %d", BinarySearch(key, nums, length));
    return 0;
}

int BinarySearch(int key, const int dict[], int len) {
    int low = 0;
    int high = len - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (dict[mid] == key) {
            return mid;
        } else if (dict[mid] > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}
