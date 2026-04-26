#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front=NULL,*rear=NULL;

int isEmpty(){
    return front==NULL;
}

void enqueue(){
    int val;
    struct node *newNode;
    printf("Enter value: ");
    scanf("%d",&val);
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;
    if(front==NULL){
        front=rear=newNode;
        return;
    }
    rear->next=newNode;
    rear=newNode;
}

void dequeue(){
    struct node *temp;
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    temp=front;
    printf("Deleted = %d\n",temp->data);
    front=front->next;
    if(front==NULL)
        rear=NULL;
    free(temp);
}

void display(){
    struct node *ptr=front;
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

void peek(){
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    printf("Front element = %d\n",front->data);
}

void check(){
    if(isEmpty())
        printf("Queue empty\n");
    else
        printf("Queue not empty\n");
}

int main(){
    int ch;
    while(1){
        printf("\n----- Queue using Linked List -----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Check empty\n");
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
