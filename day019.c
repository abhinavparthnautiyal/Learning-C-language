/*Problem: Given an array of integers, find two elements whose sum is closest to zero.

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the pair of elements whose sum is closest to zero

Example:
Input:
5
1 60 -10 70 -80

Output:
-10 1

Explanation: Among all possible pairs, the sum of -10 and 1 is -9, which is the closest to zero compared to other pairs.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, A[100];
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    int minSum = 1000000, x = 0, y = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = A[i] + A[j];
            if(abs(sum) < abs(minSum)) {
                minSum = sum;
                x = A[i];
                y = A[j];
            }
        }
    }

    printf("%d %d", x, y);
    return 0;
}