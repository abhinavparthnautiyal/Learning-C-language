// Finding Middle element in LL

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void findMiddle() {
    struct node *slow, *fast;
    if(head == NULL) {
        return;
    }
    
    slow = fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    printf("Middle element: %d\n", slow->data);
}

int main() {
    findMiddle();
    return 0;
}