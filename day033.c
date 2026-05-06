/*Problem: Find all positions of a key in an array.

Input:
- First line: integer n
- Second line: n integers
- Third line: key

Output:
- Print all 0-based positions, or -1 if absent*/
#include <stdio.h>

int main() {
    int n, arr[100], key, found = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("-1");
    }
    return 0;
}
