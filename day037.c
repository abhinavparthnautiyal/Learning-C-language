/*Problem: Merge two sorted arrays.

Input:
- First line: integers n and m
- Second line: n sorted integers
- Third line: m sorted integers

Output:
- Print the merged sorted array*/
#include <stdio.h>

int main() {
    int n, m, a[100], b[100], i = 0, j = 0;

    scanf("%d %d", &n, &m);
    for (int x = 0; x < n; x++) {
        scanf("%d", &a[x]);
    }
    for (int x = 0; x < m; x++) {
        scanf("%d", &b[x]);
    }

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            printf("%d ", a[i++]);
        } else {
            printf("%d ", b[j++]);
        }
    }
    while (i < n) {
        printf("%d ", a[i++]);
    }
    while (j < m) {
        printf("%d ", b[j++]);
    }
    return 0;
}
