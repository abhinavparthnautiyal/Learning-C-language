#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *Enqueue(struct node *rear, struct node **front) {
    int n;
    printf("Enter how many elements you want to enqueue: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL) { 
            printf("Memory allocation failed.\n"); return rear; 
        }
        printf("Enter element %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if(*front == NULL) {
            *front = newnode;
            rear = newnode;
        } else {
            rear->next = newnode;
            rear = newnode;
        }
    }
    return rear;
}

struct node *Dequeue(struct node *rear, struct node **front) {
    if(*front == NULL) {
        printf("Queue Underflow! Queue is empty.\n");
        return NULL;
    }
    struct node *temp = *front;
    printf("Dequeued: %d\n", temp->data);
    *front = (*front)->next;
    if(*front == NULL)
        rear = NULL;
    free(temp);
    return rear;
}

void Peek(struct node *front) {
    if(front == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Front element: %d\n", front->data);
}

void Display(struct node *front) {
    if(front == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    struct node *temp = front;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct node *front = NULL;
    struct node *rear = NULL;
    int decide;
    while(1) {
        printf("Press 1 to Enqueue\nPress 2 to Dequeue\nPress 3 to Peek\nPress 4 to Display\nPress 5 to Exit\n");
        scanf("%d", &decide);
        switch(decide) {
            case 1: rear = Enqueue(rear, &front); break;
            case 2: rear = Dequeue(rear, &front); break;
            case 3: Peek(front);                  break;
            case 4: Display(front);               break;
            case 5: exit(0);
            default: printf("Invalid input.\n");
        }
        printf("\n");
    }
    return 0;
}