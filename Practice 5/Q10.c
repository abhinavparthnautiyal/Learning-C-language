// Delete a node after a given node

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void deleteAfterNode() {
    struct node *temp, *delnode;
    int key;
    if(head == NULL) return;
    
    printf("Enter the data of the node whose next node you want to delete: ");
    scanf("%d", &key);
    
    temp = head;
    while(temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    
    if(temp == NULL || temp->next == NULL) {
        printf("No node exists after the given node.\n");
        return;
    }
    
    delnode = temp->next;
    temp->next = delnode->next;
    
    if(delnode->next != NULL) {
        delnode->next->prev = temp;
    }
    free(delnode);
}

int main() {
    deleteAfterNode();
    return 0;
}