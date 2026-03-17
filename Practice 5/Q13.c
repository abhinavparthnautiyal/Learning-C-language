// Reverse

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void reverseList() {
    struct node *current, *nextnode;
    current = head;
    
    while(current != NULL) {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        
        if(nextnode == NULL) {
            head = current;
        }
        current = nextnode;
    }
}

int main() {
    reverseList();
    return 0;
}