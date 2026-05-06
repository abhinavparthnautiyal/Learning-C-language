/*Problem: Implement stack push and pop using an array.

Input:
- First line: integer n
- Second line: n integers to push
- Third line: integer k, number of pops

Output:
- Print remaining stack elements from top to bottom*/
#include <stdio.h>

int main() {
    int n, k, stack[100], top = -1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &stack[++top]);
    }
    scanf("%d", &k);
    while (k-- > 0 && top >= 0) {
        top--;
    }

    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    return 0;
}
