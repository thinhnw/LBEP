#include <stdio.h>
void main() {
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);

	int reverseN = 0;
	while (n > 0) {
		reverseN = reverseN*10 + n%10;
		n /= 10;
	}
	printf("Ket qua: %d\n", reverseN);
}
