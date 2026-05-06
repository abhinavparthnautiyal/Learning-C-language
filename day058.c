/*Problem: Check whether a number is a perfect number.

Input:
- Integer n

Output:
- Print "Perfect" or "Not Perfect"*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    printf(sum == n && n > 0 ? "Perfect" : "Not Perfect");
    return 0;
}
