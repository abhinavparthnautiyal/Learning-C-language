// Delete a given node

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void deleteGivenNode() {
    struct node *temp;
    int key;
    if(head == NULL) return;
    
    printf("Enter the data of the node you want to delete: ");
    scanf("%d", &key);
    
    temp = head;
    while(temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    
    if(temp == NULL) {
        printf("Node not found.\n");
        return;
    }
    
    if(temp == head) {
        head = temp->next;
        if(head != NULL) head->prev = NULL;
    } else {
        temp->prev->next = temp->next;
        if(temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
    }
    free(temp);
}

int main() {
    deleteGivenNode();
    return 0;
}