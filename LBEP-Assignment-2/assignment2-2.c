#include <stdio.h>
void main() {
    int a, b;
    printf("nhap a = ");
    scanf("%d", &a);
    printf("nhap b = ");
    scanf("%d", &b);
    if (a >= b) {
        if (b == 0) {
            printf("phep chia khong hop le");
        } else {
            printf("%f", (1.*a)/b);
        }
    } else printf("%d", a*b);
}