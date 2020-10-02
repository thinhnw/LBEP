#include <stdio.h>

void main() {

	double capital;
	double interest_rate;
	int years;

	printf("Enter Capital Sum\n");
	scanf("%lf", &capital);

	printf("Enter Rate of Interest\n");
	scanf("%lf", &interest_rate);

	printf("Enter Number of Years\n");
	scanf("%d", &years);

	printf("%-10s %-18s %-s\n", "Year", "Interest", "Sum");
	for (int i = 1; i <= years; ++i) {

		double interest = capital * interest_rate / 100;
		capital += interest;
		printf("%-10d %-18.6lf %-.6lf\n", i, interest, capital);
	}
}
