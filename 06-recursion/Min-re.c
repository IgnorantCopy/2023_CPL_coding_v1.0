//
// Created by Ignorant on 2023/11/10.
//

#include <stdio.h>
#define NUM 3

/*
 * nums: global variable (defined out of any function)
 * scope: file scope
 * storage duration/lifetime: static
 * at the beginning of the execution of the programme till the end of the execution
 */
const int nums[NUM] = {65, 28, 37};

int Min(const int numbers[], int len);
// main: stack frame 1
int main() {
    /*
     * min: local variable (defined in functions, including main)
     * scope: block scope
     * storage duration/lifetime: automatic
     * stack: stack frame for its enclosing function
     */
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
