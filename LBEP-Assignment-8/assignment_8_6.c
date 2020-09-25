#include <stdio.h>
#include "lcm.h"
void main() {
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("Boi chung nho nhat cua a va b la: %d\n", getLCM(a, b));
}