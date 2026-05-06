/*Problem: Count frequency of each element in an array.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print each distinct element and its frequency*/
#include <stdio.h>

int main() {
    int n, arr[100], visited[100] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    visited[j] = 1;
                    count++;
                }
            }
            printf("%d %d\n", arr[i], count);
        }
    }
    return 0;
}
