#include <stdio.h>
#define MAX 100

int queue[MAX],front=-1,rear=-1;

int isEmpty(){
    return front==-1;
}

int isFull(){
    return (front==0 && rear==MAX-1) || front==rear+1;
}

void enqueue(){
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
    queue[rear]=val;
}

void dequeue(){
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    printf("Deleted = %d\n",queue[front]);
    if(front==rear)
        front=rear=-1;
    else if(front==MAX-1)
        front=0;
    else
        front++;
}

void display(){
    int i;
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    i=front;
    while(1){
        printf("%d ",queue[i]);
        if(i==rear)
            break;
        i=(i+1)%MAX;
    }
    printf("\n");
}

void check(){
    if(isEmpty())
        printf("Queue empty\n");
    else
        printf("Queue not empty\n");
    if(isFull())
        printf("Queue full\n");
    else
        printf("Queue not full\n");
}

int main(){
    int ch;
    while(1){
        printf("\n----- Circular Queue using Array -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Check empty/full\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: check(); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
