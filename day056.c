/*Problem: Print prime numbers in a range.

Input:
- Two integers start and end

Output:
- Print all prime numbers in the range*/
#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int start, end;

    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
