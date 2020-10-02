#include <stdio.h>

#define MAX_DIGITS 100

typedef struct {
	int digits[MAX_DIGITS];
	int len;
} bignum;

bignum a;
void print_bignum(bignum *num) {
	
	for (int i = num->len - 1; i >= 0; i--) {
		printf("%d", num->digits[i]);
	}
}

void int_to_bignum(int val, bignum *num) {

	
	if (val == 0) {
		num->len = 1;
		num->digits[0] = 0;
		return;
	}
	num->len = 0;
	for (int i = 0; i < MAX_DIGITS; ++i) {
		num->digits[i] = 0;
	}
	while (val > 0) {
		num->digits[num->len] = val % 10;
		num->len++;
		val /= 10;
	}
}

int max(int a, int b) {
	if (a > b) return a;
	return b;
}

void add_bignum(bignum *a, bignum *b, bignum *sum) {

	int carry = 0;
	int_to_bignum(0, sum);

	sum->len = max(a->len, b->len);
	for (int i = 0; i < (sum->len); ++i) {
		sum->digits[i] = (a->digits[i] + b->digits[i] + carry) % 10;
		carry = (a->digits[i] + b->digits[i] + carry) / 10;
	}
	if (carry == 1) {
		sum->digits[sum->len++] = 1;
	}
}

void sol1() {

	long long f[101];
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 100; ++i) {
		f[i] = f[i-1] + f[i-2];
	}

	for (int i = 1; i <= 100; ++i) {
		printf("%lld ", f[i]);
	}
	printf("\n");
}

void test() {
	bignum a, b, c;
	int_to_bignum(3, &a);
	int_to_bignum(7, &b);
	add_bignum(&a, &b, &c);
	print_bignum(&c);
}
void sol2() {

	bignum bigf[101];
	int_to_bignum(0, &bigf[0]);
	int_to_bignum(1, &bigf[1]);

	
	for (int i = 2; i <= 100; ++i) {
		add_bignum(&bigf[i-1], &bigf[i-2], &bigf[i]);
	}

	for (int i = 1; i <= 100; ++i) {
		print_bignum(&bigf[i]);
		printf(" ");
	}

}

void main() {

	// sol1();
	// test();
	sol2();
}
