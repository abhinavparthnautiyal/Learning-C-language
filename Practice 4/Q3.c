// 3: Add a node at the beginning

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail = NULL;

void addAtBeginning() {
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    
    if(tail == NULL) {
        tail = newnode;
        tail->next = newnode;
    } else {
        newnode->next = tail->next;
        tail->next = newnode;
    }
}

int main() {
    addAtBeginning();
    return 0;
}