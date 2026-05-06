/*Problem: Allocate a matrix dynamically and find sum of all elements.

Input:
- Rows and columns
- Matrix elements

Output:
- Print sum*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols, sum = 0;
    int *matrix;

    scanf("%d %d", &rows, &cols);
    matrix = (int *)malloc(rows * cols * sizeof(int));
    if (matrix == NULL) {
        return 1;
    }

    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", &matrix[i]);
        sum += matrix[i];
    }

    printf("%d", sum);
    free(matrix);
    return 0;
}
