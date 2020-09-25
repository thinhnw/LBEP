#include <stdio.h>
#include "sum_digits.h"
void main() {
    int n;
    printf("n = ");
    scanf("%d", &n);

    printf("Tong cac chu so cua n: %d\n", sumDigits(n));
}