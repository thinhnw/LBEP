#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {

    int a;
    int b;
    int c;

    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);   
    printf("c = ");
    scanf("%d", &c);

    bool triangle = false;
    if (a + b > c) {
        if (b + c > a) {
            if (c + a > b) {
                triangle = true;
                int p = (a + b + c)/2;
                float S = sqrt(p * (p-a) * (p-b) * (p-c));
                printf("Chu vi P = %d\n", p*2);
                printf("Dien tich S = %f\n", S);
            } 
        } 
    }

    if (!triangle) {
        printf("Khong tao thanh tam giac");
    }


    return 0;
}