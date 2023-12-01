//
// Created by Ignorant on 2023/11/24.
//

#include <stdio.h>
#include <malloc.h>
#define PI 3.14

/*
 * variables:
 *  1.A variable has its type, value, and address.
 *  2.A variable can be used as a leftValue or a rightValue.
 *  3.A pointer is a variable that contains the address of a variable.
 */

int main() {
    /*************** On radius1 ***************/
    // type: int; value: 100; address: &radius1
    int radius1 = 100;
    printf("radius1 = %d\n", radius1);
    // &: address-of operator
    printf("&radius1 = %p\n", &radius1);

    radius1 = 200;   //leftValue
    double circumference = 2 * PI * radius1;    //rightValue
    printf("circumference = %f\n", circumference);

    /*************** On ptr_radius1 ***************/
    // type: int * (pointer to int); value: &radius1; address:
    int *ptr_radius1 = &radius1;
    printf("ptr_radius1 = %p\n", ptr_radius1);
    printf("&ptr_radius1 = %p\n", &ptr_radius1);
    // as a leftValue
    int radius2 = 1000;
    int *ptr_radius2 = &radius2;
    ptr_radius1 = ptr_radius2;
    // *ptr_radius1 behaves like radius2
    // *: indirection (dereference) operator
    *ptr_radius1 = 2000;
    printf("radius2 = %d\n", radius2);
    printf("radius2 = %d\n", *ptr_radius2);
    circumference = 2 * PI * (*ptr_radius1);

    /*************** Additional ***************/
    // the value of a pointer cannot be the address of itself
    int v = 100;
    int *pv = &v;
    pv = &pv;

    /*************** On array names ***************/
    int arr[] = {1, 2, 3};
    // arr++; ==> X

    /*************** On malloc/free ***************/
    int var = 10;
//    free(var);    ==> you don't need to free the memory on the stack

    /*************** On const ***************/
    // v: int, const int
    // pv: int *, int * const
    // const int *, const int * const, int const *, int const * const
    return 0;
}
