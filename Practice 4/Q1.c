// 1: Create a list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail = NULL;

void createList() {
    struct node *newnode;
    int n, i;
    printf("Enter number of nodes you want to create: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
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
}

int main() {
    createList();
    return 0;
}