//
// Created by Ignorant on 2023/10/8.
//


#include <stdio.h>

#define LEN 5

int main() {
    //int[5] (not int, not int[])
    int numbers[LEN] = {1, 2, 3, 4, 5};
    int min = numbers[0];  //[]: array subscripting operator
    /*
     * wrong version:
     * const int LEN = 5;
     * int numbers[LEN] = {1, 2, 3, 4, 5};
     * VLA: variable-length array
     * right: int numbers[LEN];
     */
    /*
     * for (①init clause; ②condition expression; ③iteration expression) {
     *      ④content
     * }
     * order: ① --> (② --> ④ --> ③) --> (② --> ④ --> ③) --> ... --> ②不成立 --> end
     */
    for (int i = 1; i < LEN; i++) {
        min = (min > numbers[i]) ? numbers[i] : min;
    }
    printf("%d", min);
    return 0;
}
