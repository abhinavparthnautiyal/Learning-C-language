#include <stdio.h>
#define MAX 100

int queue[MAX],front=-1,rear=-1;

int isEmpty(){
    return front==-1;
}

int isFull(){
    return rear==MAX-1;
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
        front=0;
    queue[++rear]=val;
}

void dequeue(){
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    printf("Deleted = %d\n",queue[front]);
    if(front==rear)
        front=rear=-1;
    else
        front++;
}

void display(){
    int i;
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    for(i=front;i<=rear;i++)
        printf("%d ",queue[i]);
    printf("\n");
}

void peek(){
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    printf("Front element = %d\n",queue[front]);
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
        printf("\n----- Linear Queue using Array -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Check empty/full\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: peek(); break;
            case 5: check(); break;
            case 6: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
