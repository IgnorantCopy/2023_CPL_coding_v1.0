//
// Created by Ignorant on 2023/11/10.
//

#include <stdio.h>

int GCD(int a, int b);
int main() {
    int a = 0;
    int b = 0;
    scanf("%d%d", &a, &b);    //130 124
    printf("%d", GCD(a, b));
    // iter1: GCD(130, 124)
    // iter2: GCD(124, 6)
    // iter3: GCD(6, 4)
    // iter4: GCD(4, 2)
    // iter5: GCD(2, 0)
    return 0;
}

int GCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}
