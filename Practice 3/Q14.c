// Finding cycle in LL

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void findCycle() {
    struct node *slow, *fast;
    slow = fast = head;
    
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast) {
            printf("Cycle detected\n");
            return;
        }
    }
    printf("No cycle found\n");
}

int main() {
    findCycle();
    return 0;
}