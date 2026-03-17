// Sort the list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void sortList() {
    struct node *current, *index;
    int temp_data;
    
    if(head == NULL) return;
    
    for(current = head; current->next != NULL; current = current->next) {
        for(index = current->next; index != NULL; index = index->next) {
            if(current->data > index->data) {
                temp_data = current->data;
                current->data = index->data;
                index->data = temp_data;
            }
        }
    }
}

int main() {
    sortList();
    return 0;
}