#include <stdio.h>
void main() {
	int years = 4;
	double money = 4000;
	for (int i=0; i < years; ++i) {
		money = money + money * (8./100);	
	}

	printf("Tong tien thu duoc la %lf\n", money);
}
