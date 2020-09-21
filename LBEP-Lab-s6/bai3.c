#include <stdio.h>
const int N = 1e6;

void main() {
    int n, x;
    int a[N];
    printf("n = ");
    scanf("%d", &n);
    printf("x = ");
    scanf("%d", &x);

    int index = -1;
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if (a[i] == x) {
            index = i;
            break;
        }
    }
    if (index >= 0) {
        printf("Tim thay a[%d] = x = %d\n", index, x);
    } else {
        printf("Khong tim thay x trong mang a\n");
    }
}