#include <stdio.h>
const int N = 1e6;

void main() {
    int n;
    int a[N];
    printf("n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    double avg = 0; // ban dau tinh tong, cuoi cung lay trung binh
    int cnt = 0; // dem so so le
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2) {
            avg += a[i];
            cnt++;
        }
    }
    if (cnt)
        avg = avg/cnt;
    printf("Average = %lf\n", avg);
}