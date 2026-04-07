/*Problem: Given an array of integers, rotate the array to the right by k positions.

Input:
- First line: integer n
- Second line: n integers
- Third line: integer k

Output:
- Print the rotated array

Example:
Input:
5
1 2 3 4 5
2

Output:
4 5 1 2 3*/
#include <stdio.h>

int main() {
    int n, A[100], B[100], k;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    scanf("%d", &k);

    k = k % n;

    for(int i = 0; i < n; i++)
        B[(i + k) % n] = A[i];

    for(int i = 0; i < n; i++)
        printf("%d ", B[i]);

    return 0;
}