#include "gcd.h"
int getLCM(int a, int b) {
    return (a / getGCD(a, b)) * b; 
}