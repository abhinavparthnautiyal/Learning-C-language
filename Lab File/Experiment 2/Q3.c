#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

int countNodes(struct node *tail){
    int count=0;
    struct node *ptr;
    if(tail==NULL)
        return 0;
    ptr=tail->next;
    do{
        count++;
        ptr=ptr->next;
    }while(ptr!=tail->next);
    return count;
}

struct node* createList(struct node *tail){
    int n,i,val;
    struct node *newNode;
    tail=NULL;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter data: ");
        scanf("%d",&val);
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=val;
        if(tail==NULL){
            tail=newNode;
            tail->next=tail;
        }
        else{
            newNode->next=tail->next;
            tail->next=newNode;
            tail=newNode;
        }
    }
    return tail;
}

void display(struct node *tail){
    struct node *ptr;
    if(tail==NULL){
        printf("List empty\n");
        return;
    }
    ptr=tail->next;
    do{
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }while(ptr!=tail->next);
    printf("\n");
}

struct node* insertBeginning(struct node *tail){
    int val;
    struct node *newNode;
    printf("Enter value: ");
    scanf("%d",&val);
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    if(tail==NULL){
        tail=newNode;
        tail->next=tail;
    }
    else{
        newNode->next=tail->next;
        tail->next=newNode;
    }
    return tail;
}

struct node* insertEnd(struct node *tail){
    int val;
    struct node *newNode;
    printf("Enter value: ");
    scanf("%d",&val);
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    if(tail==NULL){
        tail=newNode;
        tail->next=tail;
    }
    else{
        newNode->next=tail->next;
        tail->next=newNode;
        tail=newNode;
    }
    return tail;
}

struct node* insertPosition(struct node *tail){
    int pos,val,i,n;
    struct node *newNode,*ptr;
    printf("Enter position: ");
    scanf("%d",&pos);
    printf("Enter value: ");
    scanf("%d",&val);

    n=countNodes(tail);
    if(pos<1 || pos>n+1){
        printf("Invalid position\n");
        return tail;
    }

    if(pos==1)
        return insertBeginning(tail);

    if(pos==n+1)
        return insertEnd(tail);

    ptr=tail->next;
    for(i=1;i<pos-1;i++)
        ptr=ptr->next;

    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=ptr->next;
    ptr->next=newNode;

    return tail;
}

struct node* deleteBeginning(struct node *tail){
    struct node *head;
    if(tail==NULL){
        printf("Empty\n");
        return tail;
    }
    head=tail->next;
    if(head==tail){
        free(head);
        return NULL;
    }
    tail->next=head->next;
    free(head);
    return tail;
}

struct node* deleteEnd(struct node *tail){
    struct node *ptr;
    if(tail==NULL){
        printf("Empty\n");
        return tail;
    }
    if(tail->next==tail){
        free(tail);
        return NULL;
    }
    ptr=tail->next;
    while(ptr->next!=tail)
        ptr=ptr->next;
    ptr->next=tail->next;
    free(tail);
    tail=ptr;
    return tail;
}

struct node* deletePosition(struct node *tail){
    int pos,i,n;
    struct node *ptr,*pre;
    if(tail==NULL){
        printf("Empty\n");
        return tail;
    }
    printf("Enter position: ");
    scanf("%d",&pos);

    n=countNodes(tail);
    if(pos<1 || pos>n){
        printf("Invalid position\n");
        return tail;
    }

    if(pos==1)
        return deleteBeginning(tail);

    if(pos==n)
        return deleteEnd(tail);

    ptr=tail->next;
    for(i=1;i<pos;i++){
        pre=ptr;
        ptr=ptr->next;
    }
    pre->next=ptr->next;
    free(ptr);
    return tail;
}

void search(struct node *tail){
    int val,pos=1,flag=0;
    struct node *ptr;
    if(tail==NULL){
        printf("Empty\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d",&val);
    ptr=tail->next;
    do{
        if(ptr->data==val){
            printf("Found at position %d\n",pos);
            flag=1;
            break;
        }
        ptr=ptr->next;
        pos++;
    }while(ptr!=tail->next);
    if(flag==0)
        printf("Not found\n");
}

void count(struct node *tail){
    printf("Count = %d\n",countNodes(tail));
}

struct node* reverse(struct node *tail){
    struct node *prev,*cur,*nextNode,*head;
    if(tail==NULL || tail->next==tail)
        return tail;

    head=tail->next;
    prev=tail;
    cur=head;

    do{
        nextNode=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextNode;
    }while(cur!=head);

    tail=head;
    return tail;
}

void middle(struct node *tail){
    struct node *slow,*fast;
    if(tail==NULL){
        printf("Empty\n");
        return;
    }
    slow=tail->next;
    fast=tail->next;
    while(fast!=tail && fast->next!=tail){
        slow=slow->next;
        fast=fast->next->next;
    }
    printf("Middle = %d\n",slow->data);
}

void cycle(struct node *tail){
    if(tail==NULL){
        printf("No cycle\n");
        return;
    }
    printf("Cycle exists because the list is circular\n");
}

struct node* sort(struct node *tail){
    struct node *p1,*p2,*head;
    int temp;
    if(tail==NULL || tail->next==tail)
        return tail;

    head=tail->next;
    p1=head;
    do{
        p2=p1->next;
        while(p2!=head){
            if(p1->data > p2->data){
                temp=p1->data;
                p1->data=p2->data;
                p2->data=temp;
            }
            p2=p2->next;
        }
        p1=p1->next;
    }while(p1!=head);

    return tail;
}

int main(){
    int ch;
    struct node *tail=NULL;

    while(1){
        printf("\n----- Circular Singly Linked List Menu -----\n");
        printf("1. Create list\n");
        printf("2. Display list\n");
        printf("3. Insert at beginning\n");
        printf("4. Insert at end\n");
        printf("5. Insert at position\n");
        printf("6. Delete from beginning\n");
        printf("7. Delete from end\n");
        printf("8. Delete from position\n");
        printf("9. Search element\n");
        printf("10. Count nodes\n");
        printf("11. Reverse list\n");
        printf("12. Find middle element\n");
        printf("13. Detect cycle\n");
        printf("14. Sort in ascending order\n");
        printf("15. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: tail=createList(tail); break;
            case 2: display(tail); break;
            case 3: tail=insertBeginning(tail); break;
            case 4: tail=insertEnd(tail); break;
            case 5: tail=insertPosition(tail); break;
            case 6: tail=deleteBeginning(tail); break;
            case 7: tail=deleteEnd(tail); break;
            case 8: tail=deletePosition(tail); break;
            case 9: search(tail); break;
            case 10: count(tail); break;
            case 11: tail=reverse(tail); printf("List reversed\n"); break;
            case 12: middle(tail); break;
            case 13: cycle(tail); break;
            case 14: tail=sort(tail); printf("List sorted\n"); break;
            case 15: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}