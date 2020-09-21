#include <stdio.h>
const int N = 1e6;
void main() {
    int n;
    int a[N];
    printf("n = ");
    scanf("%d", &n);

    int maxSum = 0;
    int tmpSum = 0;
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            tmpSum += a[i];
        } else {
            if (tmpSum > maxSum) maxSum = tmpSum;
            tmpSum = 0;
        }
    }
    if (tmpSum > maxSum) maxSum = tmpSum;
    printf("Chuoi so duong co tong lon nhat la: %d\n", maxSum);
}