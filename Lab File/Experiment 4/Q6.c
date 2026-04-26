#include <stdio.h>
#define MAX 100

struct item{
    int data,priority;
};

struct item pq[MAX];
int n=0;

int isEmpty(){
    return n==0;
}

int isFull(){
    return n==MAX;
}

void insert(){
    if(isFull()){
        printf("Full\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d",&pq[n].data);
    printf("Enter priority: ");
    scanf("%d",&pq[n].priority);
    n++;
}

void deleteHighest(){
    int i,pos=0;
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    for(i=1;i<n;i++){
        if(pq[i].priority>pq[pos].priority)
            pos=i;
    }
    printf("Deleted = %d\n",pq[pos].data);
    for(i=pos;i<n-1;i++)
        pq[i]=pq[i+1];
    n--;
}

void display(){
    int i;
    if(isEmpty()){
        printf("Empty\n");
        return;
    }
    for(i=0;i<n;i++)
        printf("%d(%d) ",pq[i].data,pq[i].priority);
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
        printf("\n----- Priority Queue using Array -----\n");
        printf("1. Insert with priority\n");
        printf("2. Delete highest priority element\n");
        printf("3. Display elements\n");
        printf("4. Check empty/full\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: insert(); break;
            case 2: deleteHighest(); break;
            case 3: display(); break;
            case 4: check(); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
