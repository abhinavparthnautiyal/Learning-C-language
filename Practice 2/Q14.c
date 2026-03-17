// Find the largest three distinct elements in an array: Input: arr[] = {10, 4, 3, 50, 23, 90} Output: 90, 50, 23

#include <stdio.h>

int main() {
    int arr[] = {10, 4, 3, 50, 23, 90};
    int n = 6;
    int first = -1, second = -1, third = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    printf("%d, %d, %d\n", first, second, third);
    return 0;
}