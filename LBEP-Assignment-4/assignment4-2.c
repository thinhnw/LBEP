#include <stdio.h>
void main() {
	int n;
	printf("Nhap N = ");
	scanf("%d", &n);

	double s = 0;
	for (int i = 1; i <= n; ++i) {
		s = s + 1./i;
	}

	printf("Tong S = %lf", s);
}
