// Add the node before a given node

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void addBeforeNode() {
    struct node *newnode, *temp, *prev;
    int pos_data;
    printf("Enter the data of the node before which you want to insert: ");
    scanf("%d", &pos_data);
    
    temp = head;
    while(temp != NULL && temp->data != pos_data) {
        prev = temp;
        temp = temp->next;
    }
    
    if(temp == NULL) {
        printf("Node not found.\n");
        return;
    }
    
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    
    if(temp == head) {
        newnode->next = head;
        head = newnode;
    } else {
        newnode->next = temp;
        prev->next = newnode;
    }
}

int main() {
    addBeforeNode();
    return 0;
}