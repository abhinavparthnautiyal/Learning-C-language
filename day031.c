/*Problem: Implement a circular queue with insertions.

Input:
- First line: capacity and number of values n
- Second line: n integers

Output:
- Print the circular queue from front to rear, or "Overflow" if full*/
#include <stdio.h>

int main() {
    int capacity, n, queue[100], front = -1, rear = -1, value;

    scanf("%d %d", &capacity, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        if ((front == 0 && rear == capacity - 1) || (rear + 1 == front)) {
            printf("Overflow");
            return 0;
        }
        if (front == -1) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % capacity;
        }
        queue[rear] = value;
    }

    for (int i = front; ; i = (i + 1) % capacity) {
        printf("%d ", queue[i]);
        if (i == rear) {
            break;
        }
    }
    return 0;
}
