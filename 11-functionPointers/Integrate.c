//
// Created by Ignorant on 2023/12/15.
//

#include <stdio.h>
#include <math.h>
#define NUM_OF_PARTITIONS 100000

double Integrate(double left, double right, double (*func)(double));
double MyFunc(double x);
int main() {
    double left = 0.0;
    double right = 1.0;
    double integration = Integrate(left, right, sin);
    printf("%f\n", integration);
    integration = Integrate(left, right, cos);
    printf("%f\n", integration);
    integration = Integrate(left, right, MyFunc);
    printf("%f\n", integration);

    double (*functions[])(double) = {sin, cos, MyFunc};
    for (int i = 0; i < 3; i++) {
        printf("integration = %f\n", Integrate(left, right, functions[i]));
    }
    return 0;
}
double Integrate(double left, double right, double (*func)(double)) {
    double interval = (right - left) / (double) NUM_OF_PARTITIONS;
    double sum = 0.0;
    for (int i = 0; i < NUM_OF_PARTITIONS; i++) {
        double xi = left + interval * i;
        double yi = func(xi);
        sum += yi * interval;
    }
    return sum;
}

double MyFunc(double x) {
    return x * x;
}
