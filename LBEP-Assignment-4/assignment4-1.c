#include <stdio.h>
void main() {
	int n;
	printf("Nhap N = ");
	scanf("%d", &n);
	
	int s = 0;
	for (int i = 1; i <= n; ++i) {
		s = s + i;
	}

	printf("Tong S = %d", s);
}
