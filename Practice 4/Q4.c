// 4. Add a node at the end

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail = NULL;

void addAtEnd() {
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
        tail = newnode;
    }
}

int main() {
    addAtEnd();
    return 0;
}