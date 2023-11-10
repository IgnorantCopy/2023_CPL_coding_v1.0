//
// Created by Ignorant on 2023/11/10.
//



#include <stdio.h>

int Sum(const int numbers[], int len);
int main() {
    const int nums[] = {1, 2, 3, 4, 5};
    int len = sizeof nums / sizeof nums[0];
    int sum = Sum(nums, len);
    printf("%d", sum);
    return 0;
}

int Sum(const int numbers[], int len) {
    if (len == 0) {
        return 0;
    }
    return numbers[len - 1] + Sum(numbers, len - 1);
}
