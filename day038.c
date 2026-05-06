/*Problem: Remove duplicates from a sorted array.

Input:
- First line: integer n
- Second line: n sorted integers

Output:
- Print unique elements*/
#include <stdio.h>

int main() {
    int n, arr[100], unique[100], size = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            unique[size++] = arr[i];
        }
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", unique[i]);
    }
    return 0;
}
