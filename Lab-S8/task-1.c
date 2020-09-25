#include <stdio.h>
#include "is_prime.h"
void main() {
	int n;
	printf("n = ");
	scanf("%d", &n);

	printf(isPrime(n) == 1? "n la so nguyen to\n" : "n khong phai so nguyen to\n");	
}
