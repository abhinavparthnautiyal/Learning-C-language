//stacks implementation using array
//Perform Push, pop, peek, display function on array.
#include<stdio.h>
#include<stdlib.h>

#define max 1000
int stack[max];
int top = -1;

void Push() {
    int n;
    printf("Enter how many elements do you want to enter: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        if(top == max - 1) {
            printf("Stack Overflow! Stack is full\n");
            return;
        }
        top++;
        scanf("%d", &stack[top]);
    }
}

void Peek()
{
    if(top == -1)
    {
        printf("Stack is empty");
        return;
    }
    printf("%d", stack[top]);
}

void Pop(){
    if(top == -1)
    { 
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }
    top--;
}

void Display()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }
    for(int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
}

int main()
{
    int decide;

    while(1){
    printf("Press 1 to Push an Element\nPress 2 to Peek\nPress 3 to Pop\nPress 4 to display\nPress 5 to exit\n");
    scanf("%d", &decide);
    switch(decide)
    {
        case 1:
        Push();
        break;

        case 2:
        Peek();
        break;

        case 3:
        Pop();
        break;

        case 4:
        Display();
        break;

        case 5:
        exit(0);
        break;

        default:
        printf("Invalid input\n");
    }
    printf("\n");
    }
}
