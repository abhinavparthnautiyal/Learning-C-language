// Store 'n' numbers (integers or real) in an array. Conduct a linear search for a given number and report success or failure in the form of a suitable message.

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    int target = 30;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Search success: Number found.\n");
    } else {
        printf("Search failure: Number not found.\n");
    }
    return 0;
}