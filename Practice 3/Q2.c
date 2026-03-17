// Display the list

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void displayList() {
    struct node *temp;
    temp = head;
    if(temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    displayList();
    return 0;
}