// Delete a node from the beginning

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void deleteFromBeginning() {
    struct node *temp;
    if(head == NULL) {
        printf("List is already empty.\n");
        return;
    }
    
    temp = head;
    head = head->next;
    
    if(head != NULL) {
        head->prev = NULL;
    }
    free(temp);
}

int main() {
    deleteFromBeginning();
    return 0;
}