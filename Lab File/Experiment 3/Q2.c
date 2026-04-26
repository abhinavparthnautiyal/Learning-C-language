#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *top=NULL;

void push(){
    int val;
    struct node *newNode;
    printf("Enter value: ");
    scanf("%d",&val);

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=top;
    top=newNode;
}

void pop(){
    struct node *temp;
    if(top==NULL){
        printf("Underflow\n");
        return;
    }
    temp=top;
    printf("Popped = %d\n",temp->data);
    top=top->next;
    free(temp);
}

void peek(){
    if(top==NULL){
        printf("Stack empty\n");
        return;
    }
    printf("Top element = %d\n",top->data);
}

void display(){
    struct node *ptr=top;
    if(top==NULL){
        printf("Stack empty\n");
        return;
    }
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

int main(){
    int ch;
    while(1){
        printf("\n----- Stack using Linked List -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;
            default: printf("Invalid\n");
        }
    }
}