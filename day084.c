/*Problem: Sort digits using counting sort.

Input:
- First line: integer n
- Second line: n digits from 0 to 9

Output:
- Print sorted digits*/
#include <stdio.h>

int main() {
    int n, value, count[10] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        if (value >= 0 && value <= 9) {
            count[value]++;
        }
    }

    for (int i = 0; i < 10; i++) {
        while (count[i]-- > 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
