/*Problem: Allocate an array dynamically and find its sum.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print sum of array elements*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, sum = 0;

    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);
    free(arr);
    return 0;
}
