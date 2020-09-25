int trianglePerimeter(int a, int b, int c) {
    if (a + b <= c || b + c <= a || c + a <= b) return -1;
    return a + b + c;
}