/*Problem: Merge Two Sorted Linked Lists - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers (first list)
- Third line: integer m
- Fourth line: m space-separated integers (second list)

Output:
- Print the merged linked list elements, space-separated

Example:
Input:
5
10 20 30 40 50
4
15 25 35 45

Output:
10 15 20 25 30 35 40 45 50

Explanation:
Compare nodes of both lists, append smaller to result, continue until all nodes are merged.*/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node* Createlist(struct node* head){
    int n,num;
    struct node* temp=NULL;
    struct node* newnode=NULL;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL){
      printf("memory overflow");        
      return head;
    }
     scanf("%d", &num);
     newnode->data=num;
     newnode->next=NULL;
     if(head==NULL){
        head = newnode;
    }
    else{
        temp=head;
         while(temp->next!=NULL){
        temp=temp->next;
     }
     temp->next=newnode;
    }
    }
    return head;
}

void display(struct node* head){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}

struct node* mergelist(struct node* head1, struct node* head2){
    struct node* head3=NULL;
    struct node* temp1=head1;
    struct node* temp2=head2;
    
    struct node* temp3=NULL;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            if(head3==NULL){
                head3=temp3=temp1;
                temp1=temp1->next;
            }
        else{
                temp3->next=temp1;
                temp3=temp3->next;
                temp1=temp1->next;
            }
        }
        else{
            if(head3==NULL){
                head3=temp3=temp2;
                temp2=temp2->next;
            }
            else{
                temp3->next=temp2;
                temp3=temp3->next;
                temp2=temp2->next;            
            }
        }
        }
        return head3;
    }


int main(){
    struct node* head1=NULL;
    struct node* head2=NULL;
    head1=Createlist(head1);
    head2=Createlist(head2);
    struct node* head3=mergelist(head1, head2);
    display(head3);
    return 0;

}