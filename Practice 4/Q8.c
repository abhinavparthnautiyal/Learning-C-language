// 8: Delete the entire list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail = NULL;

void deleteEntireList() {
    struct node *current, *temp;
    if(tail == NULL) return;
    
    current = tail->next;
    while(current != tail) {
        temp = current;
        current = current->next;
        free(temp);
    }
    free(tail);
    tail = NULL;
}

int main() {
    deleteEntireList();
    return 0;
}