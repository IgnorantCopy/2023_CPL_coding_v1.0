//
// Created by Ignorant on 2023/10/13.
//


#include <stdio.h>
#define LEN 100
int nums[LEN] = {0};

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);  //取消缓冲区
    int index = -1;
    int returnValue;
    while ((returnValue = scanf("%d", &nums[++index])) != EOF) {
        printf("return value = %d\n", returnValue);
    }
    /*
     * the output of scanf():
     *  1.input failure: EOF or end of file(-1)
     *  2.match failure: numbers of matched items
     * the input of scanf():
     *  1.data stream: line by line
     * about cache region(缓存区):
     *  1.Linux: Ctrl+D submit the cache
     *  2.Windows: Ctrl+Z submit the cache(need gcc)
     * Input&Output redirection:
     *  ./<codeName> < <textName> > <newTextName>
     * my issue:
     *  debug the programme and use Ctrl+D(once if in the new line, twice if at the end of the input line)
     */
    for (int i = 0; i < index; i++) {
        printf("%d  ", nums[i]);
    }
    printf("\n");
    for (int i = 0; i < index - 1; i++) {
        //find the minimum number in nums[i, index]
        int min = nums[i];
        int minIndex = i;
        for (int j = i + 1; j < index; j++) {
            if (nums[j] < min) {
                min = nums[j];
                minIndex = j;
            }
        }
        //swap nums[i] and nums[minIndex]
        nums[minIndex] = nums[i] ^ nums[minIndex];
        nums[i] = nums[i] ^ nums[minIndex];
        nums[minIndex] = nums[i] ^ nums[minIndex];
    }
    for (int i = 0; i < index; i++) {
        printf("%d  ", nums[i]);
    }
    return 0;
}
