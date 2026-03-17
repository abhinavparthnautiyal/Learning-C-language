// Create a list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node* createList(*head)
 {
    struct node *newnode, *temp;
    int n, i;
    printf("Enter number of nodes you want to create: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        
        if(head == NULL) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
        return head;
    }
}

struct node* displayList(*head){
    struct node *temp;
    temp = head;
    if(temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return head;
}


int main() {
    struct node* head = NULL;
    head=createList(&head);
    head=List(&head);
        return 0;
}