// Find the product of two matrices using pointers.

#include <stdio.h>

void multiplyMatrices(int r1, int c1, int a[r1][c1], int r2, int c2, int b[r2][c2], int res[r1][c2]) {
  
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int r1 = 2, c1 = 3; 
    int r2 = 3, c2 = 2;

    int a[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int b[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int res[2][2];

    multiplyMatrices(r1, c1, a, r2, c2, b, res);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}