#include <stdio.h>
#define MAX 100

int s1[MAX],s2[MAX],top1=-1,top2=-1;

int isEmpty(){
    return top1==-1 && top2==-1;
}

void push1(int x){
    s1[++top1]=x;
}

void push2(int x){
    s2[++top2]=x;
}

int pop1(){
    return s1[top1--];
}

int pop2(){
    return s2[top2--];
}

void move(){
    while(top1!=-1)
        push2(pop1());
}

void enqueue(){
    int val;
    if(top1+top2+2==MAX){
        printf("Full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d",&val);
    push1(val);
}

void dequeue(){
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    if(top2==-1)
        move();
    printf("Deleted = %d\n",pop2());
}

void display(){
    int i;
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    for(i=top2;i>=0;i--)
        printf("%d ",s2[i]);
    for(i=0;i<=top1;i++)
        printf("%d ",s1[i]);
    printf("\n");
}

void peek(){
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    if(top2==-1)
        move();
    printf("Front element = %d\n",s2[top2]);
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
        printf("\n----- Queue using Two Stacks -----\n");
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
