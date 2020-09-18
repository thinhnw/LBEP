#include <stdio.h>
void main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);

    int divisorSum = 0;
    printf("Cac uoc cua n: ");
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            printf("%d ", i);
            divisorSum += i;
        }
    }
    printf("\nTong cac uoc cua n = %d\n", divisorSum);
}