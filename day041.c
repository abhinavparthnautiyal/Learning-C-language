/*Problem: Find transpose of a matrix.

Input:
- First line: rows and columns
- Next rows lines: matrix elements

Output:
- Print the transpose*/
#include <stdio.h>

int main() {
    int rows, cols, matrix[50][50];

    scanf("%d %d", &rows, &cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
