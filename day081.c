/*Problem: Print Tower of Hanoi moves.

Input:
- Number of disks n

Output:
- Print moves from A to C using B*/
#include <stdio.h>

void hanoi(int n, char from, char aux, char to) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, from, to, aux);
    printf("%c -> %c\n", from, to);
    hanoi(n - 1, aux, from, to);
}

int main() {
    int n;

    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
