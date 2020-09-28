#include <stdio.h>
#include <string.h>

const int N = 1e3;

void strswap(char **s1, char **s2) {

    char *tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

void main() {

    char s[N][N];
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("s[%d] = ", i);
        scanf("%s", s[i]);
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (strcmp(s[i], s[j]) > 0) {
                strswap(&s[i], &s[j]);
            }
        }
    }

    printf("n chuoi sau khi sap xep: \n");
    for (int i = 0; i < n; ++i) {
        printf("%s\n", s[i]);
    } 
    
}