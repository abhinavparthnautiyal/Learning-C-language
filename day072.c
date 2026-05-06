/*Problem: Convert binary number to decimal.

Input:
- Binary number using digits 0 and 1

Output:
- Print decimal value*/
#include <stdio.h>

int main() {
    long binary;
    int decimal = 0, base = 1;

    scanf("%ld", &binary);
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }

    printf("%d", decimal);
    return 0;
}
