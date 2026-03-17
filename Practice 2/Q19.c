// Write a program to count the total number of nonzero elements in a two-dimensional array.

#include <stdio.h>

int main() {
    int arr[3][3] = {
        {0, 5, 0},
        {8, 0, 2},
        {0, 0, 7}
    };
    int rows = 3, cols = 3;
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] != 0) {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}