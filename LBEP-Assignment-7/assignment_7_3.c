#include <stdio.h>
const int N = 1e6;
void main() {
    int n, tmp;
    int a[N];
    printf("n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for(;;) {
            printf("a[%d] = ", i);
            scanf("%d", &tmp);
            int l = 0;
            int r = i - 1;
            while (l < r) {
                int mid = (l + r + 1) >> 1;                
                if (a[mid] > tmp) r = mid - 1;
                    else l = mid; 
            }
            if (a[l] == tmp) {
                continue;
            } else {
                a[i] = tmp;
                break;
            }
        }
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