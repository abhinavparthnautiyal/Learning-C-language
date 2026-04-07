#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *Push(struct node *top) {
    int n;
    printf("Enter how many elements you want to push: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL) {
            printf("Memory allocation failed.\n");
            return top;
        }
        printf("Enter element %d: ", i + 1);
        scanf("%d", &newnode->data);
        newnode->next = top;
        top = newnode;
    }
    return top;
}

void Peek(struct node *top) {
    if(top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("%d\n", top->data);
}

struct node *Pop(struct node *top) {
    if(top == NULL) {
        printf("Stack Underflow! Stack is empty.\n");
        return NULL;
    }
    struct node *temp = top;
    printf("Popped: %d\n", temp->data);
    top = top->next;
    free(temp);
    return top;
}

void Display(struct node *top) {
    if(top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct node *temp = top;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct node *top = NULL;
    int decide;

    while(1) {
        printf("Press 1 to Push an Element\nPress 2 to Peek\nPress 3 to Pop\nPress 4 to Display\nPress 5 to reverse the stack\nPress 6 to Exit\n");
        scanf("%d", &decide);
        switch(decide) {
            case 1:
                top = Push(top);
                break;

            case 2:
                Peek(top);
                break;

            case 3:
                top = Pop(top);
                break;

            case 4:
                Display(top);
                break;

            case 5:
                top = Reverse(top);
                break;
            
            case 6:
                exit(0);
                break;

            default:
                printf("Invalid input\n");
        }
        printf("\n");
    }
}