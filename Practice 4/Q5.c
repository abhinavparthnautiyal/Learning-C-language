// 5. Delete a node at the beginning

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail = NULL;

void deleteAtBeginning() {
    struct node *temp;
    if(tail == NULL) {
        printf("List is already empty.\n");
        return;
    }
    
    temp = tail->next;
    if(temp == tail) {
        tail = NULL;
        free(temp);
    } else {
        tail->next = temp->next;
        free(temp);
    }
}

int main() {
    deleteAtBeginning();
    return 0;
}