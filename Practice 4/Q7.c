// 7. Delete a node after data value.

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail = NULL;

void deleteAfterData() {
    struct node *temp, *delnode;
    int value;
    if(tail == NULL) return;
    
    printf("Enter the data value after which you want to delete: ");
    scanf("%d", &value);
    
    temp = tail->next;
    do {
        if(temp->data == value) {
            delnode = temp->next;
            if(temp == delnode) {
                printf("Only one node exists, nothing to delete after.\n");
                return;
            }
            temp->next = delnode->next;
            if(delnode == tail) {
                tail = temp;
            }
            free(delnode);
            return;
        }
        temp = temp->next;
    } while(temp != tail->next);
    
    printf("Data value not found in the list.\n");
}

int main() {
    deleteAfterData();
    return 0;
}