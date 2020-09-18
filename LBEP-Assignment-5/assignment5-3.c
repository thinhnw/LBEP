#include <stdio.h>
void main() {
    int a, b;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    
    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }
    int gcd = 1;
    for (int i = a; i >= 1; --i){
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;
        }
    }
    printf("Uoc chung lon nhat cua a, b la: %d\n", gcd);
}