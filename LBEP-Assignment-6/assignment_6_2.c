#include <stdio.h>
const int N = 1e6;
void main() {
    int n;
    int a[N];
    printf("n = ");
    scanf("%d", &n);

    int res = -1;
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            res = i;
        }
    }
    if (res == -1) {
        printf("Mang khong co so nguyen duong\n");
    } else {
        for (int i = 0; i < n; ++i) {
            if (a[i] > 0 && a[i] < a[res]) {
                res = i;
            }
        }
        printf("So nguyen duong nho nhat trong mang la a[%d] = %d\n", res, a[res]);
    }
}