// Add a node at the beginning

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void addAtBeginning() {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = head;
    
    if(head != NULL) {
        head->prev = newnode;
    }
    head = newnode;
}

int main() {
    addAtBeginning();
    return 0;
}