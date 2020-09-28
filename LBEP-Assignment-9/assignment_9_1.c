#include <stdio.h>
#include <string.h>

const int N = 1e6;

void main() {

    char s[N];
    printf("Nhap S = ");
    scanf("%s", s);

    int n = strlen(s);
    int cntVowels = 0;

    for (int i = 0; i < n; ++i) {
        switch (s[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cntVowels++;
                break;
            
            default:
                break;
        } 
    }

    printf("So luong cac nguyen am trong chuoi s la: %d\n", cntVowels);
    printf("So luong cac ky tu con lai la: %d\n", n - cntVowels);
}