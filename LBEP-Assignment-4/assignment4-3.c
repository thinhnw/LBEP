#include <stdio.h>
void main() {
	
	int S = 0;
	for (int i = 0; i < 100; ++i) {
		S += (2*i + 1);
	}	

	printf("Tong 100 so le > 0 dau tien la: %d\n", S);
}



