/*Problem: Multiply two matrices.

Input:
- r1 c1, first matrix, r2 c2, second matrix

Output:
- Print product matrix or "Not Possible"*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, a[20][20], b[20][20], product[20][20] = {0};

    scanf("%d %d", &r1, &c1);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if (c1 != r2) {
        printf("Not Possible");
        return 0;
    }

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                product[i][j] += a[i][k] * b[k][j];

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
