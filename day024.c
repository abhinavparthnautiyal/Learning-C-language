/*Problem: Delete First Occurrence of a Key - Implement using linked list with dynamic memory allocation.

Input:
- First line: integer n
- Second line: n space-separated integers
- Third line: integer key

Output:
- Print the linked list elements after deletion, space-separated

Example:
Input:
5
10 20 30 40 50
30

Output:
10 20 40 50

Explanation:
Traverse list, find first node with key, remove it by adjusting previous node's next pointer.*/
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

struct node* delete(struct node* head){
    int del;
    scanf("%d", &del);
    struct node* temp=head;
    struct node* temp2=NULL;
    if(temp==NULL){
    printf("NO Element present");
    return head;
    }
    else if(head->data==del){
        free(head);
        return head;
    }
    else{
    while(temp->next->data!=del){
         temp=temp->next;
         if(temp==NULL)
         {
            printf("Element does not exist");
            return head;
         }
    }
    temp2=temp->next;
    temp->next=temp->next->next;
    free(temp2);
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
    head=delete(head);
    display(head);
    return 0;

}