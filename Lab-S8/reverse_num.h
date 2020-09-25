int reverseNum(int n) {
    int rv = 0;
    while (n > 0) {
        rv = rv * 10 + n % 10;
        n /= 10;
    }
    return rv;
}