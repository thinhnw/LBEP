#include <stdio.h>
const int N = 1e6;
void main() {
    int n;
    int a[N];
    printf("n = ");
    scanf("%d", &n);

    int max = 0;
    int tmp = 0;
    for (int i = 0; i < n; ++i) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            tmp++;
        } else {
            if (tmp > max) max = tmp;
            tmp = 0;
        }
    }
    if (tmp > max) max = tmp;
    printf("So so nguyen duong lien tiep dai nhat la %d\n", max);
    
}