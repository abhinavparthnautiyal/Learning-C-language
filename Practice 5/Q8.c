// Delete a node from the end

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void deleteFromEnd() {
    struct node *temp;
    if(head == NULL) {
        printf("List is already empty.\n");
        return;
    }
    
    temp = head;
    if(temp->next == NULL) {
        head = NULL;
        free(temp);
        return;
    }
    
    while(temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->prev->next = NULL;
    free(temp);
}

int main() {
    deleteFromEnd();
    return 0;
}