/*Problem: Create a binary tree in array form and print inorder traversal.

Input:
- Integer n
- n integers representing level-order tree values

Output:
- Print inorder traversal*/
#include <stdio.h>

void inorder(int arr[], int index, int n) {
    if (index >= n) {
        return;
    }
    inorder(arr, 2 * index + 1, n);
    printf("%d ", arr[index]);
    inorder(arr, 2 * index + 2, n);
}

int main() {
    int n, arr[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    inorder(arr, 0, n);
    return 0;
}
