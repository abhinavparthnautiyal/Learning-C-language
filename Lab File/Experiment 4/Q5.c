#include <stdio.h>
#define MAX 100

int deque[MAX],front=-1,rear=-1;

int isEmpty(){
    return front==-1;
}

int isFull(){
    return (front==0 && rear==MAX-1) || front==rear+1;
}

void insertFront(){
    int val;
    if(isFull()){
        printf("Full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d",&val);
    if(front==-1)
        front=rear=0;
    else if(front==0)
        front=MAX-1;
    else
        front--;
    deque[front]=val;
}

void insertRear(){
    int val;
    if(isFull()){
        printf("Full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d",&val);
    if(front==-1)
        front=rear=0;
    else if(rear==MAX-1)
        rear=0;
    else
        rear++;
    deque[rear]=val;
}

void deleteFront(){
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    printf("Deleted = %d\n",deque[front]);
    if(front==rear)
        front=rear=-1;
    else if(front==MAX-1)
        front=0;
    else
        front++;
}

void deleteRear(){
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    printf("Deleted = %d\n",deque[rear]);
    if(front==rear)
        front=rear=-1;
    else if(rear==0)
        rear=MAX-1;
    else
        rear--;
}

void display(){
    int i;
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    i=front;
    while(1){
        printf("%d ",deque[i]);
        if(i==rear)
            break;
        i=(i+1)%MAX;
    }
    printf("\n");
}

void check(){
    if(isEmpty())
        printf("Deque empty\n");
    else
        printf("Deque not empty\n");
    if(isFull())
        printf("Deque full\n");
    else
        printf("Deque not full\n");
}

int main(){
    int ch;
    while(1){
        printf("\n----- Deque using Array -----\n");
        printf("1. Insert at front\n");
        printf("2. Insert at rear\n");
        printf("3. Delete from front\n");
        printf("4. Delete from rear\n");
        printf("5. Display\n");
        printf("6. Check empty/full\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: insertFront(); break;
            case 2: insertRear(); break;
            case 3: deleteFront(); break;
            case 4: deleteRear(); break;
            case 5: display(); break;
            case 6: check(); break;
            case 7: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
