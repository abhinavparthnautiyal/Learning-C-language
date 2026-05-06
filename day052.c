/*Problem: Calculate power using recursion.

Input:
- Base and non-negative exponent

Output:
- Print base raised to exponent*/
#include <stdio.h>

long power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    scanf("%d %d", &base, &exponent);
    printf("%ld", power(base, exponent));
    return 0;
}
