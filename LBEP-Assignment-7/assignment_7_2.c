#include <stdio.h>
const int N = 1e6;
void main() {
    int n;
    int x;
    int a[N];

    printf("n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }
    printf("x = ");
    scanf("%d", &x);
    
    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i-1;
        while (j >= 0 && key < a[j]) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    int l = 0;
    int r = n;
    while (l < r) {
        int mid = (l + r) >> 1;
        if (a[mid] > x-1) r = mid; 
            else l = mid + 1;
    }
    printf("Mang sau khi sap xep: \n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
    if (r == 0) {
        printf("Khong co gia tri nao nho hon %d\n", x);
    } else {
        printf("Gia tri lon nhat, nho hon %d la: %d\n", x, a[r-1]);
    }
}