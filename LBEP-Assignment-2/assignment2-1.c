#include <stdio.h>
void main() {
    int a;
    printf("Nhap a = ");
    scanf("%d", &a);

    if (a >= 2) {
        if (a <= 7) {
            printf("day la thu %d", a);
        } else if (a == 8) {
            printf("day la chu nhat");
        } else {
            printf("khong phai ngay trong tuan");
        }
    } else {
        printf("khong phai ngay trong tuan");
    }
}