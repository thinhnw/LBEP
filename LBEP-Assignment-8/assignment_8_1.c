#include <stdio.h>
#include "next_prime.h"
void main() {
    int n ;
    printf("n = ");
    scanf("%d", &n);

    printf("So nguyen to can tim la: %d\n", nextPrime(n)); 
}