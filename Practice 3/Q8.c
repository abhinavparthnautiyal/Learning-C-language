// Delete a node from the end

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void deleteFromEnd() {
    struct node *temp, *prevnode;
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
        prevnode = temp;
        temp = temp->next;
    }
    prevnode->next = NULL;
    free(temp);
}

int main() {
    deleteFromEnd();
    return 0;
}