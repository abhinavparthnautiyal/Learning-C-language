/*Problem: Find GCD using recursion.

Input:
- Two integers

Output:
- Print their GCD*/
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a < 0 ? -a : a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    printf("%d", gcd(a, b));
    return 0;
}
