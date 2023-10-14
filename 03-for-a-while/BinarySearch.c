//
// Created by Ignorant on 2023/10/13.
//


#include <stdio.h>

int main() {
    int nums[100] = {0};
    int length = sizeof(nums) / sizeof(nums[0]);
    int key = 0;
    int index = -1;
    scanf("%d", &key);
    for (int i = 0; i < length; i++) {
        nums[i] = i;
    }
    int low = 0;
    int high = length - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid == key) {
            index = mid;
            high = mid - 1;    //!!!
        } else if (mid > key) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    printf("index = %d", index);
    return 0;
}
