#include <stdio.h>
#include "triangle_perimeter.h"
void main() {
    int a, b, c;
    printf("Nhap do dai 3 canh tam giac: \n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    int P = trianglePerimeter(a, b, c);
    if (P == -1) {
        printf("Khong phai ba canh tam giac\n");
        return;
    }
    printf("Chu vi tam giac P = %d\n", P);
}