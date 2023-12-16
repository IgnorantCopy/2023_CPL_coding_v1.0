//
// Created by Ignorant on 2023/12/15.
//


#include <stdio.h>

int Sum(const int arr[], int length);
int main() {
    int nums[] = {1, 1, 2, 3, 5};

    // 1.sizeof: as the operand of sizeof
    size_t len = sizeof nums / sizeof(nums[0]);
    printf("len = %zu\n", len);
    printf("sizeof nums: %zu\n", sizeof(nums));

    // 2.&: as the operand of the address-of operator
//    int **ptr = &nums;    // Incompatible pointer types initializing 'int **' with an expression of type 'int (*)[5]'
    int (*ptr_nums)[len] = &nums;

    // 3.as the string literal used for array initialization
    char msg[] = "Hi";
    printf("sizeof msg = %zu\n", sizeof msg);
    char *msg_ptr = "Hi";
    printf("sizeof msg_ptr = %zu\n", sizeof msg_ptr);

    // 4.as a function argument
    Sum(nums, len);
    return 0;
}

int Sum(const int arr[], int length) {
    printf("sizeof nums = %zu\n", sizeof arr);
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum;
}
