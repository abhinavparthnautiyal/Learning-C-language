#include <stdio.h>
#include <stdlib.h>

#define max 5
int deque[max];
int front = -1;
int rear = -1;

void InsertFront() {
    int val;
    if((front == 0 && rear == max - 1) || (front > rear)) {
        printf("Overflow\n");
        return;
    }
    printf("Enter element to insert at front: ");
    scanf("%d", &val);
    if(front == -1) {
        front = 0;
        rear = 0;
    } else {
        if(front == 0)
            front = max - 1;
        else
            front = front - 1;
    }
    deque[front] = val;
    return;
}

void InsertRear() {
    int val;
    if((front == 0 && rear == max - 1) || (front > rear)) {
        printf("Overflow\n");
        return;
    }
    printf("Enter element to insert at rear: ");
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
    deque[rear] = val;
    return;
}

void DeleteFront() {
    int val;
    if(front == -1) {
        printf("Underflow\n");
        return;
    }
    val = deque[front];
    if(front == rear) {
        front = rear = -1;
    } else {
        if(front == max - 1)
            front = 0;
        else
            front = front + 1;
    }
    printf("Deleted from front: %d\n", val);
    return;
}

void DeleteRear() {
    int val;
    if(front == -1) {
        printf("Underflow\n");
        return;
    }
    val = deque[rear];
    if(front == rear) {
        front = rear = -1;
    } else {
        if(rear == 0)
            rear = max - 1;
        else
            rear = rear - 1;
    }
    printf("Deleted from rear: %d\n", val);
    return;
}

void Peek() {
    if(front == -1) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Front element: %d\n", deque[front]);
    printf("Rear element: %d\n", deque[rear]);
    return;
}

void Display() {
    if(front == -1) {
        printf("Deque is empty.\n");
        return;
    }
    printf("Elements in deque: ");
    if(rear >= front) {
        for(int i = front; i <= rear; i++)
            printf("%d ", deque[i]);
    } else {
        for(int i = front; i < max; i++)
            printf("%d ", deque[i]);
        for(int i = 0; i <= rear; i++)
            printf("%d ", deque[i]);
    }
    printf("\n");
    return;
}

int main() {
    int decide;
    while(1) {
        printf("Press 1 to Insert at Front\n");
        printf("Press 2 to Insert at Rear\n");
        printf("Press 3 to Delete from Front\n");
        printf("Press 4 to Delete from Rear\n");
        printf("Press 5 to Peek\n");
        printf("Press 6 to Display\n");
        printf("Press 7 to Exit\n");
        scanf("%d", &decide);
        switch(decide) {
            case 1: InsertFront(); break;
            case 2: InsertRear();  break;
            case 3: DeleteFront(); break;
            case 4: DeleteRear();  break;
            case 5: Peek();        break;
            case 6: Display();     break;
            case 7: exit(0);
            default: printf("Invalid input.\n");
        }
        printf("\n");
    }
    return 0;
}