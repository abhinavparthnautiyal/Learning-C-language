// 6. Delete a node at the end

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail = NULL;

void deleteAtEnd() {
    struct node *current, *previous;
    if(tail == NULL) {
        printf("List is already empty.\n");
        return;
    }
    
    current = tail->next;
    if(current == tail) {
        tail = NULL;
        free(current);
    } else {
        while(current->next != tail->next) {
            previous = current;
            current = current->next;
        }
        previous->next = tail->next;
        tail = previous;
        free(current);
    }
}

int main() {
    deleteAtEnd();
    return 0;
}