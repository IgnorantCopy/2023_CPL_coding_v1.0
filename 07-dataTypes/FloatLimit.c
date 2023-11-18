//
// Created by Ignorant on 2023/11/17.
//


#include <stdio.h>
#include <float.h>

int main() {
    float pi = 3.14159F;
    // FLT_MAX = 3.402823e+38
    printf("FLT_MAX = %e\n", FLT_MAX);
    // FLT_MIN = 1.175494e-38
    printf("FLT_MIN = %e\n", FLT_MIN);
    //FLT_TRUE_MIN = 1.401298e-45
    printf("FLT_TRUE_MIN = %e\n", FLT_TRUE_MIN);
    //FLT_EPSILON = 1.192093e-07
    printf("FLT_EPSILON = %e\n", FLT_EPSILON);

    // DBL_MAX = 1.797693e+308
    printf("DBL_MAX = %e\n", DBL_MAX);
    // DBL_MIN = 2.225074e-308
    printf("DBL_MIN = %e\n", DBL_MIN);
    // DBL_TRUE_MIN = 4.940656e-324
    printf("DBL_TRUE_MIN = %e\n", DBL_TRUE_MIN);
    // DBL_EPSILON = 2.220446e-16
    printf("DBL_EPSILON = %e\n", DBL_EPSILON);

    return 0;
}
