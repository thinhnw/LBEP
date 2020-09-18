#include <stdio.h>
#include <math.h>
void main() {
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Cac so nguyen to nho hon n: ");

    if (n < 2) return;
    if (n >= 2) printf("2 ");

    for (int num = 3; num <= n; ++num) {
        int check = 1; // Set 'check' default value equal to 'True'
        for (int i = 2; i <= floor(sqrt(num)); ++i) {
            if (num % i == 0){
                check = 0;
                break;
            }
        }
        if (check) {
            printf("%d ", num);
        }
    }
    printf("\n");
}