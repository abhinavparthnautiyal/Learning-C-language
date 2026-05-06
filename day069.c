/*Problem: Toggle kth bit of a number.

Input:
- Integer n and bit position k starting from 0

Output:
- Print number after toggling kth bit*/
#include <stdio.h>

int main() {
    unsigned int n, k;

    scanf("%u %u", &n, &k);
    n = n ^ (1U << k);
    printf("%u", n);
    return 0;
}
