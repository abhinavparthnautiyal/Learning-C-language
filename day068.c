/*Problem: Count set bits in an integer.

Input:
- Non-negative integer n

Output:
- Print number of 1 bits*/
#include <stdio.h>

int main() {
    unsigned int n;
    int count = 0;

    scanf("%u", &n);
    while (n > 0) {
        count += n & 1U;
        n >>= 1U;
    }

    printf("%d", count);
    return 0;
}
