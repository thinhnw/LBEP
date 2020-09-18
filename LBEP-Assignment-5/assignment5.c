#include <stdio.h>
void main() {

	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	if (n < 0) {
		printf("khong ton tai");
		return;
	}	
	int f0 = 1;
	int f1 = 1;
	int fi = 0;
	
	printf("So fibo thu %d la: ", n);
	switch (n) {
		case 0:
			printf("0\n");
			break;
		case 1:
			printf("1\n");
			break;
		default:
			for (int i = 2; i <= n; ++i) {
				fi = f0 + f1;
				f0 = f1;
				f1 = fi;
			}
			printf("%d\n", fi);
	}
}
