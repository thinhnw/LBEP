#include <stdio.h>
void main() {
    int n;
    printf("Nhap n = ", &n);
    scanf("%d", &n);

    int i = 0;
    while (i <= n) {
        printf("%d\n", i);
        i += 2;
    } 
}