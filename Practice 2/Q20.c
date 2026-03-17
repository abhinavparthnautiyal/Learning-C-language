// Write a program using pointers to interchange the second biggest and the second smallest number in the array.
#include <stdio.h>

int main() {
    int arr[] = {5, 2, 9, 1, 7, 6};
    int n = 6;
    int *ptr = arr;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    int *sec_min_ptr = ptr + 1;
    int *sec_max_ptr = ptr + n - 2;

    int temp = *sec_min_ptr;
    *sec_min_ptr = *sec_max_ptr;
    *sec_max_ptr = temp;

    for (int i = 0; i < n; i++) printf("%d ", *(ptr + i));
    
    return 0;
}