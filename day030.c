/*Problem: Implement queue enqueue and dequeue using an array.

Input:
- First line: integer n
- Second line: n integers to enqueue
- Third line: integer k, number of dequeues

Output:
- Print remaining queue elements from front to rear*/
#include <stdio.h>

int main() {
    int n, k, queue[100], front = 0, rear = -1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &queue[++rear]);
    }
    scanf("%d", &k);
    while (k-- > 0 && front <= rear) {
        front++;
    }

    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    return 0;
}
