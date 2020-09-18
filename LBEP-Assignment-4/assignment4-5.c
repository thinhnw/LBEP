#include <stdio.h>
#include <math.h>

void main() {
	int n;

	printf("Nhap n = ");
	scanf("%d", &n);

	if (n < 2) {
		printf("N ko phai so nguyen to\n");
		return;
	}
	if (n == 2) {
		printf("N la so nguyen to\n");
		return;
	}	
		
	for (int i = 2; i <= floor(sqrt(n)); i++) {
		if (n % i == 0) {
			printf("N ko phai so nguyen to\n");
			return;
		}		
	}

	printf("N la so nguyen to\n");
}


