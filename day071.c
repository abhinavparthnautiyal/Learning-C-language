/*Problem: Find square using a macro.

Input:
- Integer n

Output:
- Print square of n*/
#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    int n;

    scanf("%d", &n);
    printf("%d", SQUARE(n));
    return 0;
}
