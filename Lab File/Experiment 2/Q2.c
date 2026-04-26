#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *prev,*next;
};

struct node* createList(struct node *head){
    int n,i,data;
    struct node *newNode,*tail;
    head=NULL;
    tail=NULL;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter data: ");
        scanf("%d",&data);
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->data=data;
        newNode->prev=NULL;
        newNode->next=NULL;
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
    }
    return head;
}

void displayForward(struct node *head){
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

void displayReverse(struct node *head){
    struct node *ptr=head;
    if(head==NULL){
        printf("List empty\n");
        return;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->prev;
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
    newNode->prev=NULL;
    newNode->next=head;
    if(head!=NULL)
        head->prev=newNode;
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
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
        return head;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->next=newNode;
    newNode->prev=ptr;
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
        newNode->prev=NULL;
        newNode->next=head;
        if(head!=NULL)
            head->prev=newNode;
        head=newNode;
        return head;
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
    newNode->prev=ptr;

    if(ptr->next!=NULL)
        ptr->next->prev=newNode;

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
    if(head!=NULL)
        head->prev=NULL;
    free(ptr);
    return head;
}

struct node* deleteEnd(struct node *head){
    struct node *ptr=head;
    if(head==NULL){
        printf("Empty\n");
        return head;
    }
    if(head->next==NULL){
        free(head);
        return NULL;
    }
    while(ptr->next!=NULL)
        ptr=ptr->next;
    ptr->prev->next=NULL;
    free(ptr);
    return head;
}

struct node* deletePosition(struct node *head){
    int pos,i;
    struct node *ptr=head;
    printf("Enter position: ");
    scanf("%d",&pos);

    if(head==NULL){
        printf("Empty\n");
        return head;
    }

    if(pos==1){
        ptr=head;
        head=head->next;
        if(head!=NULL)
            head->prev=NULL;
        free(ptr);
        return head;
    }

    for(i=1;i<pos && ptr!=NULL;i++)
        ptr=ptr->next;

    if(ptr==NULL){
        printf("Invalid position\n");
        return head;
    }

    if(ptr->next!=NULL)
        ptr->next->prev=ptr->prev;
    if(ptr->prev!=NULL)
        ptr->prev->next=ptr->next;

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
    struct node *cur=head,*temp=NULL;
    while(cur!=NULL){
        temp=cur->prev;
        cur->prev=cur->next;
        cur->next=temp;
        cur=cur->prev;
    }
    if(temp!=NULL)
        head=temp->prev;
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
        printf("\n----- Doubly Linked List Menu -----\n");
        printf("1. Create list\n");
        printf("2. Display forward\n");
        printf("3. Display reverse\n");
        printf("4. Insert at beginning\n");
        printf("5. Insert at end\n");
        printf("6. Insert at position\n");
        printf("7. Delete from beginning\n");
        printf("8. Delete from end\n");
        printf("9. Delete from position\n");
        printf("10. Search element\n");
        printf("11. Count nodes\n");
        printf("12. Reverse list\n");
        printf("13. Find middle element\n");
        printf("14. Detect cycle\n");
        printf("15. Sort in ascending order\n");
        printf("16. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: head=createList(head); break;
            case 2: displayForward(head); break;
            case 3: displayReverse(head); break;
            case 4: head=insertBeginning(head); break;
            case 5: head=insertEnd(head); break;
            case 6: head=insertPosition(head); break;
            case 7: head=deleteBeginning(head); break;
            case 8: head=deleteEnd(head); break;
            case 9: head=deletePosition(head); break;
            case 10: search(head); break;
            case 11: count(head); break;
            case 12: head=reverse(head); printf("List reversed\n"); break;
            case 13: middle(head); break;
            case 14: cycle(head); break;
            case 15: head=sort(head); printf("List sorted\n"); break;
            case 16: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}