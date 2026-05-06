/*Problem: Find sum of digits of a number.

Input:
- Integer n

Output:
- Print sum of digits*/
#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);
    if (n < 0) {
        n = -n;
    }
    do {
        sum += n % 10;
        n /= 10;
    } while (n > 0);

    printf("%d", sum);
    return 0;
}
