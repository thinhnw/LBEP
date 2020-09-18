#include <stdio.h>
#include <math.h>
void main() {
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);

    printf("Cac so nguyen to trong khoang [a; b] la: ");

    for (int num = a; num <= b; ++num) {
        if (num < 2) {
            continue;
        }
        if (num == 2) {
            printf("2 ");
            continue;
        }
        int check = 1; // Set 'check' default value equal to 'True'
        for (int i = 2; i <= floor(sqrt(num)); ++i) {
            if (num % i == 0){
                check = 0;
                break;
            }
        }
        if (check) printf("%d ", num);
    }
    printf("\n");
}