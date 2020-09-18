#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    printf("Giai phuong trinh ax^2 + bx + c = 0\n");
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);

    float delta = b*b - 4*a*c;
    if (delta < 0) {
        printf("Phuong trinh vo nghiem");
    } else if (delta == 0) {
        float x = -b/(2*a);
        printf("Phuong trinh nghiem kep x = %f", x);
    } else {
        float x1 = (-b - sqrt(delta))/(2*a);
        float x2 = (-b + sqrt(delta))/(2*a);
        printf("Phuong trinh co nghiem (x1, x2) la: (%f, %f)", x1, x2);
    }
    return 0;
}