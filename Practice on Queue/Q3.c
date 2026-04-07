#include <stdio.h>
#include <stdlib.h>

#define max 5
int queue[max];
int front = -1;
int rear = -1;

void Enqueue() {
    int val;
    if((front == 0 && rear == max - 1) || (front > rear)) {
        printf("Overflow\n");
        return;
    }
    printf("Enter element to enqueue: ");
    scanf("%d", &val);
    if(front == -1) {
        front = 0;
        rear = 0;
    } else {
        if(rear == max - 1)
            rear = 0;
        else
            rear = rear + 1;
    }
    queue[rear] = val;
    return;
}

void Dequeue() {
    int val;
    if(front == -1) {
        printf("Underflow\n");
        return;
    }
    val = queue[front];
    if(front == rear) {
        front = rear = -1;
    } else {
        if(front == max - 1)
            front = 0;
        else
            front = front + 1;
    }
    printf("Dequeued: %d\n", val);
    return;
}

void Peek() {
    if(front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Front element: %d\n", queue[front]);
    return;
}

void Display() {
    if(front == -1) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Elements in queue: ");
    if(rear >= front) {
        for(int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    } else {
        for(int i = front; i < max; i++)
            printf("%d ", queue[i]);
        for(int i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    printf("\n");
    return;
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