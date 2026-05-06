/*Problem: Reverse the digits of a number.

Input:
- Integer n

Output:
- Print reversed number*/
#include <stdio.h>

int main() {
    int n, reverse = 0;

    scanf("%d", &n);
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    printf("%d", reverse);
    return 0;
}
