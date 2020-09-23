#include <stdio.h>
void main() {
    const int m = 2;
    const int n = 3;
    int a[m][n];
    printf("nhap ma tran 2x3: \n");
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}