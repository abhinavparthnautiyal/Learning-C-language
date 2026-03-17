// Rearrange an array in maximum minimum form using Two Pointer Technique. Input: arr[] = {1, 2, 3, 4, 5, 6, 7} Output: arr[] = {7, 1, 6, 2, 5, 3, 4}.

#include <stdio.h>

void rearrange(int arr[], int n) {
    int temp[n];
    
    int low = 0;  
    int high = n - 1;
   
    int flag = 1; 

    for (int i = 0; i < n; i++) {
        if (flag) {
            temp[i] = arr[high--];
        } else {
            temp[i] = arr[low++];
        }
        flag = !flag;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    rearrange(arr, n);

    printf("\nRearranged Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}