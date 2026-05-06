/*Problem: Menu-driven program for array operations.

Input:
- First line: integer n
- Second line: n integers
- Third line: choice (1 sum, 2 average, 3 maximum)

Output:
- Print result based on choice*/
#include <stdio.h>

int main() {
    int n, arr[100], choice, sum = 0, max;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    scanf("%d", &choice);

    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    switch (choice) {
        case 1: printf("%d", sum); break;
        case 2: printf("%.2f", sum / (float)n); break;
        case 3: printf("%d", max); break;
        default: printf("Invalid Choice");
    }
    return 0;
}
