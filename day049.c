/*Problem: Find factorial using recursion.

Input:
- Integer n

Output:
- Print n!*/
#include <stdio.h>

long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);
    printf("%ld", factorial(n));
    return 0;
}
