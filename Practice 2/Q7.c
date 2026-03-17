// Find sum of all array elements using recursion.

#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n <= 0) return 0;
    return sumArray(arr, n - 1) + arr[n - 1];
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("%d\n", sumArray(arr, n));
    return 0;
}