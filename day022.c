/*Problem: Count Nodes in Linked List

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
#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

int countNodes(struct node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

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
 int main(){
    struct node* head=NULL;
    head=Createlist(head);
    printf("%d",countNodes(head));
    return 0;
 }

