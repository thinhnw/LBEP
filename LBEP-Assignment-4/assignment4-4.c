#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	do {
		printf("Nhap do dai 3 canh tam giac a b c\n");
		printf("a = ");
		scanf("%d", &a);
		printf("b = ");
		scanf("%d", &b);
		printf("c = ");
		scanf("%d", &c);
	} while (a + b <= c || b + c <= a || c + a <= b);

	int P = a + b + c;
	double hp = (1.)*P/2;
	double S = sqrt(hp * (hp-a) * (hp-b) * (hp-c));
	printf("Chu vi P = %d\n", P);
	printf("Dien tich S = %lf\n", S);
	return 0;
}
