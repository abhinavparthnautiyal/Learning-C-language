/*Problem: Binary search in a sorted array.

Input:
- First line: integer n
- Second line: n sorted integers
- Third line: key

Output:
- Print the 0-based index of key, or -1*/
#include <stdio.h>

int main() {
    int n, arr[100], key, low, high;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            printf("%d", mid);
            return 0;
        }
        if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    printf("-1");
    return 0;
}
