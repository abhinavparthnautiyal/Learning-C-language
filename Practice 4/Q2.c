// 2: Display the list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *tail = NULL;

void displayList() {
    struct node *temp;
    if(tail == NULL) {
        printf("List is empty.\n");
        return;
    }
    
    temp = tail->next;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while(temp != tail->next);
    printf("\n");
}

int main() {
    displayList();
    return 0;
}