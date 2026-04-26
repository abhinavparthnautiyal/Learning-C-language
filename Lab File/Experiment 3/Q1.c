#include <stdio.h>
#define MAX 100

int stack[MAX], top=-1;

void push(){
    int val;
    if(top==MAX-1){
        printf("Overflow\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d",&val);
    stack[++top]=val;
}

void pop(){
    if(top==-1){
        printf("Underflow\n");
        return;
    }
    printf("Popped = %d\n",stack[top--]);
}

void peek(){
    if(top==-1){
        printf("Stack empty\n");
        return;
    }
    printf("Top element = %d\n",stack[top]);
}

void display(){
    int i;
    if(top==-1){
        printf("Stack empty\n");
        return;
    }
    for(i=top;i>=0;i--)
        printf("%d ",stack[i]);
    printf("\n");
}

int main(){
    int ch;
    while(1){
        printf("\n----- Stack using Array -----\n");
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