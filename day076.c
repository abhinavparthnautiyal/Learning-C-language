/*Problem: Convert a sparse matrix to triplet form.

Input:
- Rows, columns, and matrix elements

Output:
- Print row column value for non-zero entries*/
#include <stdio.h>

int main() {
    int rows, cols, value;

    scanf("%d %d", &rows, &cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &value);
            if (value != 0) {
                printf("%d %d %d\n", i, j, value);
            }
        }
    }
    return 0;
}
