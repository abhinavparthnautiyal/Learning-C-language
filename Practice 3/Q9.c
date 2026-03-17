// Delete a given node

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void deleteGivenNode() {
    struct node *temp, *prevnode;
    int key;
    if(head == NULL) return;
    
    printf("Enter the data of the node you want to delete: ");
    scanf("%d", &key);
    
    temp = head;
    if(temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return;
    }
    
    while(temp != NULL && temp->data != key) {
        prevnode = temp;
        temp = temp->next;
    }
    
    if(temp == NULL) {
        printf("Node not found.\n");
        return;
    }
    prevnode->next = temp->next;
    free(temp);
}

int main() {
    deleteGivenNode();
    return 0;
}