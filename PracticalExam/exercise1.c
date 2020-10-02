#include <stdio.h>

void main() {

	long long f[101];

	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 100; ++i) {
		f[i] = f[i-1] + f[i-2];
	}

	for (int i = 1; i <= 100; ++i) {
		printf("%lld ", f[i]);
	}
}
