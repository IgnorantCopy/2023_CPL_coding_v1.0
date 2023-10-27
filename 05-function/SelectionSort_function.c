//
// Created by Ignorant on 2023/10/13.
//


#include <stdio.h>
#define LEN 100

void SelectionSort(int arr[], int len);
int GetMinIndex(const int arr[], int begin, int end);
void Print(const int arr[], int len);

int main() {
    int nums[LEN] = {0};
    setvbuf(stdout, NULL, _IONBF, 0);  //取消缓冲区
    int index = -1;
    int returnValue;
    while ((returnValue = scanf("%d", &nums[++index])) != EOF) {
        printf("return value = %d\n", returnValue);
    }
    Print(nums, index);
    printf("\n");
    SelectionSort(nums, index);
    Print(nums, index);
    return 0;
}

void SelectionSort(int arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        //find the minimum number in nums[i, index]
        int minIndex = GetMinIndex(arr, i, len);
        //swap nums[i] and nums[minIndex]
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int GetMinIndex(const int arr[], int begin, int end) {
    int min = arr[begin];
    int minIndex = begin;
    for (int j = begin + 1; j < end; j++) {
        if (arr[j] < min) {
            min = arr[j];
            minIndex = j;
        }
    }
    return minIndex;
}

void Print(const int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d  ", arr[i]);
    }
}
