// Move all zeroes to end of array

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = 8;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    while (count < n) {
        arr[count++] = 0;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}