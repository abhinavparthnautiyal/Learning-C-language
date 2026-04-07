#include<stdio.h>
#include<stdlib.h>

#define max 1000
int stack[max];
int top = -1;

void Push() {
    int n;
    printf("Enter how many elements do you want to enter: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        if(top == max - 1) {
            printf("Stack Overflow! Stack is full\n");
            return;
        }
        top++;
        scanf("%d", &stack[top]);
    }
}

void Peek() {
    if(top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("%d\n", stack[top]);
}

void Pop() {
    if(top == -1) {
        printf("Stack Underflow! Stack is empty.\n");
        return;
    }
    printf("Data popped is: %d\n", stack[top]);
    top--;
}

void Display() {
    if(top == -1) {
        printf("Stack is Empty\n");
        return;
    }
    for(int i = 0; i <= top; i++)
        printf("%d ", stack[i]);
    printf("\n");
}

void Reverse() {
    if(top == -1) {
        printf("Stack is Empty\n");
        return;
    }
    int left = 0;
    int right = top;
    while(left < right) {
        int temp = stack[left];
        stack[left] = stack[right];
        stack[right] = temp;
        left = left + 1;
        right = right - 1;
    }
    printf("Stack reversed.\n");
}

int main() {
    int decide;
    while(1) {
        printf("Press 1 to Push an Element\nPress 2 to Peek\nPress 3 to Pop\nPress 4 to Display\nPress 5 to Reverse\nPress 6 to Exit\n");
        scanf("%d", &decide);
        switch(decide) {
            case 1: Push();    break;
            case 2: Peek();    break;
            case 3: Pop();     break;
            case 4: Display(); break;
            case 5: Reverse(); break;
            case 6: exit(0);
            default: printf("Invalid input\n");
        }
        printf("\n");
    }
}