// Print all Distinct ( Unique ) Elements in given Array: Input: arr[] = {12, 10, 9, 45, 2, 10, 10, 45} Output: 12, 10, 9, 2

#include <stdio.h>

int main() {
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = 8;

    for (int i = 0; i < n; i++) {
        int isDistinct = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (isDistinct) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}