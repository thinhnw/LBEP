#include <math.h>
#include "../Lab-S8/is_prime.h"

int nextPrime(int n) {
    while (n++) {
        if (isPrime(n)) return n;
    }
    return -1; 
}