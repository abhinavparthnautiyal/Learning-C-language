/*Problem: Convert decimal number to binary.

Input:
- Non-negative integer n

Output:
- Print binary representation*/
#include <stdio.h>

int main() {
    int n, binary[32], size = 0;

    scanf("%d", &n);
    if (n == 0) {
        printf("0");
        return 0;
    }
    while (n > 0) {
        binary[size++] = n % 2;
        n /= 2;
    }
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    return 0;
}
