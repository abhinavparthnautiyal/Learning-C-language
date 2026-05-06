/*Problem: Find minimum and maximum using pointer traversal.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print minimum and maximum*/
#include <stdio.h>

int main() {
    int n, arr[100], *ptr, min, max;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    min = max = *ptr;
    for (int i = 0; i < n; i++, ptr++) {
        if (*ptr < min) {
            min = *ptr;
        }
        if (*ptr > max) {
            max = *ptr;
        }
    }

    printf("%d %d", min, max);
    return 0;
}
