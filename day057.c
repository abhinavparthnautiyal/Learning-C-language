/*Problem: Check whether a number is an Armstrong number.

Input:
- Integer n

Output:
- Print "Armstrong" or "Not Armstrong"*/
#include <stdio.h>

int main() {
    int n, temp, digits = 0, sum = 0;

    scanf("%d", &n);
    temp = n;
    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }

    printf(sum == n ? "Armstrong" : "Not Armstrong");
    return 0;
}
