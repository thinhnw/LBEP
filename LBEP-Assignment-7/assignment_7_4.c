#include <stdio.h>
const int N = 1e6;
void main() {
    int n, tmp;
    int a[N];
    printf("n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}