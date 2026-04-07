/*Problem: Given an array of integers, count the frequency of each distinct element and print the result.

Input:
- First line: integer n (size of array)
- Second line: n integers

Output:
- Print each element followed by its frequency in the format element:count

Example:
Input:
5
1 2 2 3 1

Output:
1:2 2:2 3:1*/
#include <stdio.h>

int main() {
    int n, A[100], visited[100] = {0};
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for(int i = 0; i < n; i++) {
        if(visited[i]) continue;

        int count = 1;

        for(int j = i + 1; j < n; j++) {
            if(A[i] == A[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d:%d ", A[i], count);
    }

    return 0;
}