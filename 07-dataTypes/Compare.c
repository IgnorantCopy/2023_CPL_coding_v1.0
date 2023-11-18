//
// Created by Ignorant on 2023/11/17.
//

#include <stdbool.h>
#include <math.h>
#include <float.h>
#include <stdio.h>

bool isEqual(double x, double y);

int main() {
    printf("%d\n", isEqual(DBL_MAX, DBL_MAX - 100));
    printf("%.50f\n", DBL_MAX - (DBL_MAX - 100));
    return 0;
}

bool isEqual(double x, double y) {
    return fabs(x - y) <= DBL_EPSILON;
}
