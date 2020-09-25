#include <stdio.h>
#include "triangle_area.h"
void main() {
    int a, b, c;
    printf("Nhap do dai 3 canh tam giac: \n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);

    double S = triangleArea(a, b, c);
    if (S == -1) {
        printf("Khong phai 3 canh tam giac\n");
        return;
    }
    printf("Dien tich tam giac S = %lf\n", S);
}