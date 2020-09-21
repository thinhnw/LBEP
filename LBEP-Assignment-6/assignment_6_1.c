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
        if (a[i] % 2) {
            res = i;
        }
    }

    if (res == -1) {
        printf("Mang khong co so le\n");
    } else {
        printf("So le cuoi cung cua mang la a[%d] = %d\n", res, a[res]);
    }

}