#include <math.h>
double triangleArea(int a, int b, int c) {

    if (a + b <= c || b + c <= a || c + a <= b) return -1;
    double p = (a + b + c) * (1.)/2;
    return sqrt(p * (p-a) * (p-b) * (p-c)); 
}