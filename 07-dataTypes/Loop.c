//
// Created by Ignorant on 2023/11/17.
//


#include <stdio.h>

int main() {
    /*
     * Don't use a counter of type float/double, although it works on some platforms
     * 0.1 cannot be exactly represent in machines
     */
    for (double i = 0; i < 1.0; i += 0.1) {
        printf("%.20f\n", i);
    }
    return 0;
}
