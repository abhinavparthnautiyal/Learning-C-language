// Create an array 'a1' with 'n' elements. Insert an element in ith position of 'a1' and also delete an element from jth position of 'a1'.

#include <stdio.h>

int main() {
    int a1[100] = {10, 20, 30, 40, 50};
    int n = 5;
    int i = 2; 
    int insert_val = 25;
    int j = 4; 

    for (int k = n; k > i; k--) {
        a1[k] = a1[k - 1];
    }
    a1[i] = insert_val;
    n++;

    for (int k = j; k < n - 1; k++) {
        a1[k] = a1[k + 1];
    }
    n--;

    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");
    return 0;
}