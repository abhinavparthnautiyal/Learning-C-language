#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* createList(struct node *head){
    int n,i,data;
    struct node *newNode,*tail;
    head=NULL; tail=NULL;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter data: ");
        scanf("%d",&data);
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=data;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    return head;
}

void display(struct node *head){
    struct node *ptr=head;
    if(head==NULL){
        printf("List empty\n");
        return;
    }
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

struct node* insertBeginning(struct node *head){
    int val;
    struct node *newNode;
    printf("Enter value: ");
    scanf("%d",&val);
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=head;
    head=newNode;
    return head;
}

struct node* insertEnd(struct node *head){
    int val;
    struct node *newNode,*ptr=head;
    printf("Enter value: ");
    scanf("%d",&val);
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
        return head;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=newNode;
    return head;
}

struct node* insertPosition(struct node *head){
    int val,pos,i;
    struct node *newNode,*ptr=head;
    printf("Enter position: ");
    scanf("%d",&pos);
    printf("Enter value: ");
    scanf("%d",&val);
    if(pos==1){
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=val;
        newNode->next=head;
        return newNode;
    }
    for(i=1;i<pos-1 && ptr!=NULL;i++)
        ptr=ptr->next;
    if(ptr==NULL){
        printf("Invalid position\n");
        return head;
    }
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->next=ptr->next;
    ptr->next=newNode;
    return head;
}

struct node* deleteBeginning(struct node *head){
    struct node *ptr;
    if(head==NULL){
        printf("Empty\n");
        return head;
    }
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct node* deleteEnd(struct node *head){
    struct node *ptr=head,*preptr;
    if(head==NULL){
        printf("Empty\n");
        return head;
    }
    if(head->next==NULL){
        free(head);
        return NULL;
    }
    while(ptr->next!=NULL){
        preptr=ptr;
        ptr=ptr->next;
    }
    preptr->next=NULL;
    free(ptr);
    return head;
}

struct node* deletePosition(struct node *head){
    int pos,i;
    struct node *ptr=head,*preptr;
    printf("Enter position: ");
    scanf("%d",&pos);
    if(head==NULL){
        printf("Empty\n");
        return head;
    }
    if(pos==1){
        ptr=head;
        head=head->next;
        free(ptr);
        return head;
    }
    for(i=1;i<pos && ptr!=NULL;i++){
        preptr=ptr;
        ptr=ptr->next;
    }
    if(ptr==NULL){
        printf("Invalid position\n");
        return head;
    }
    preptr->next=ptr->next;
    free(ptr);
    return head;
}

void search(struct node *head){
    int val,pos=1,flag=0;
    struct node *ptr=head;
    if(head==NULL){
        printf("Empty\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d",&val);
    while(ptr!=NULL){
        if(ptr->data==val){
            printf("Found at position %d\n",pos);
            flag=1;
            break;
        }
        ptr=ptr->next;
        pos++;
    }
    if(flag==0)
        printf("Not found\n");
}

void count(struct node *head){
    int c=0;
    struct node *ptr=head;
    while(ptr!=NULL){
        c++;
        ptr=ptr->next;
    }
    printf("Count = %d\n",c);
}

struct node* reverse(struct node *head){
    struct node *prev=NULL,*cur=head,*nextNode;
    while(cur!=NULL){
        nextNode=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextNode;
    }
    head=prev;
    return head;
}

void middle(struct node *head){
    struct node *s=head,*f=head;
    if(head==NULL){
        printf("Empty\n");
        return;
    }
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
    printf("Middle = %d\n",s->data);
}

void cycle(struct node *head){
    struct node *s=head,*f=head;
    int flag=0;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
        if(s==f){
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Cycle found\n");
    else
        printf("No cycle\n");
}

struct node* sort(struct node *head){
    struct node *p1,*p2;
    int t;
    for(p1=head;p1!=NULL;p1=p1->next){
        for(p2=p1->next;p2!=NULL;p2=p2->next){
            if(p1->data>p2->data){
                t=p1->data;
                p1->data=p2->data;
                p2->data=t;
            }
        }
    }
    return head;
}

int main(){
    int ch;
    struct node *head=NULL;
    while(1){
        printf("\n----- Singly Linked List Menu -----\n");
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
            case 1: head=createList(head); break;
            case 2: display(head); break;
            case 3: head=insertBeginning(head); break;
            case 4: head=insertEnd(head); break;
            case 5: head=insertPosition(head); break;
            case 6: head=deleteBeginning(head); break;
            case 7: head=deleteEnd(head); break;
            case 8: head=deletePosition(head); break;
            case 9: search(head); break;
            case 10: count(head); break;
            case 11: head=reverse(head); printf("List reversed\n"); break;
            case 12: middle(head); break;
            case 13: cycle(head); break;
            case 14: head=sort(head); printf("List sorted\n"); break;
            case 15: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}