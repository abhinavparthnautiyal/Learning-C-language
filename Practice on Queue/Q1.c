#include <stdio.h>
#include <stdlib.h>

#define max 1000
int queue[max];
int front = -1;
int rear = -1;

void Enqueue() {
    int n;
    printf("Enter how many elements you want to enqueue: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        if(rear == max - 1) {
            printf("Queue Overflow! Queue is full.\n");
            return;
        }
        if(front == rear == -1) {
            front = 0;
            rear = 0;
        } else {
            rear++;
        }
        printf("Enter element %d: ", i + 1);
        scanf("%d", &queue[rear]);
    }
}

void Dequeue() {
    if(front == -1) {
        printf("Queue Underflow! Queue is empty.\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    for(int i = 0; i < rear; i++)
        queue[i] = queue[i + 1];
    rear--;
    if(rear == -1)
        front = -1;
}

void Peek() {
    if(front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Front element: %d\n", queue[front]);
}

void Display() {
    if(front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    int decide;
    while(1) {
        printf("Press 1 to Enqueue\nPress 2 to Dequeue\nPress 3 to Peek\nPress 4 to Display\nPress 5 to Exit\n");
        scanf("%d", &decide);
        switch(decide) {
            case 1: Enqueue(); break;
            case 2: Dequeue(); break;
            case 3: Peek();    break;
            case 4: Display(); break;
            case 5: exit(0);
            default: printf("Invalid input.\n");
        }
        printf("\n");
    }
    return 0;
}