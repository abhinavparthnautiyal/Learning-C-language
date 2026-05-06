/*Problem: Check whether a number is prime.

Input:
- Integer n

Output:
- Print "Prime" or "Not Prime"*/
#include <stdio.h>

int main() {
    int n, prime = 1;

    scanf("%d", &n);
    if (n <= 1) {
        prime = 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    printf(prime ? "Prime" : "Not Prime");
    return 0;
}
