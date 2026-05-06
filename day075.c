/*Problem: Find primary and secondary diagonal sums of a square matrix.

Input:
- Integer n
- n by n matrix

Output:
- Print both diagonal sums*/
#include <stdio.h>

int main() {
    int n, matrix[50][50], primary = 0, secondary = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (i == j) {
                primary += matrix[i][j];
            }
            if (i + j == n - 1) {
                secondary += matrix[i][j];
            }
        }
    }

    printf("%d %d", primary, secondary);
    return 0;
}
