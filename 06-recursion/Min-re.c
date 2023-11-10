//
// Created by Ignorant on 2023/11/10.
//

#include <stdio.h>
#define NUM 3

// nums: static
const int nums[NUM] = {65, 28, 37};

int Min(const int numbers[], int len);
// main: stack frame 1
int main() {
    // min: automatic
    int min = Min(nums, NUM);
    printf("%d", min);
    return 0;
}
// Min: stack frame 2
int Min(const int numbers[], int len) {
    if (len == 1) {
        return numbers[0];
    }
    int min = Min(numbers, len - 1);
    return min < numbers[len - 1] ? min : numbers[len - 1];
}
