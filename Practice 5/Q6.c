// Add the node after a given node

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addAfterNode() {
    struct node *newnode, *temp;
    int pos_data;
    printf("Enter the data of the node after which you want to insert: ");
    scanf("%d", &pos_data);
    
    temp = head;
    while(temp != NULL && temp->data != pos_data) {
        temp = temp->next;
    }
    
    if(temp == NULL) {
        printf("Node not found.\n");
        return;
    }
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    
    newnode->prev = temp;
    newnode->next = temp->next;
    
    if(temp->next != NULL) {
        temp->next->prev = newnode;
    }
    temp->next = newnode;
}

int main() {
    addAfterNode();
    return 0;
}