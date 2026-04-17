/*Problem: Create and Traverse Singly Linked List

Input:
- First line: integer n
- Second line: n space-separated integers

Output:
- Print the result

Example:
Input:
5
10 20 30 40 50

Output:
10 20 30 40 50*/
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

int main(){
    struct node* head=NULL;
    head=Createlist(head);
    display(head);
    return 0;
}