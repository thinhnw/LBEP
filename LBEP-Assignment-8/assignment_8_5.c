#include <stdio.h>
#include "gcd.h"
void main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Uoc chung lon nhat cua a va b la: %d\n", getGCD(a, b));
}