/*Problem: Write a program to find the maximum and minimum values present in a given array of integers.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the maximum and minimum elements

Example:
Input:
6
3 5 1 9 2 8

Output:
Max: 9
Min: 1*/
#include <stdio.h>

int main() {
    int n, A[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int max = A[0], min = A[0];

    for(int i = 1; i < n; i++) {
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
    }

    printf("Max: %d\nMin: %d", max, min);

    return 0;
}