/*Problem: Find the second largest element in an array.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the second largest distinct element, or -1*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n, value, largest = INT_MIN, second = INT_MIN;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        if (value > largest) {
            second = largest;
            largest = value;
        } else if (value > second && value != largest) {
            second = value;
        }
    }

    if (second == INT_MIN) {
        printf("-1");
    } else {
        printf("%d", second);
    }
    return 0;
}
