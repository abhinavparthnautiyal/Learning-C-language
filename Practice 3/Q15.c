// Finding Middle element in LL

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int value) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

void findMiddle() {
    struct node *slow, *fast;
    
    // Added a print statement here to be more descriptive
    if(head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    
    slow = fast = head;
    
    
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    // ADDED BACK: Print the data of the middle node
    printf("Middle element: %d\n", slow->data);
}

int main() {
    // Let's create a list: 10 -> 20 -> 30 -> 40 -> 50
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    
    // Since there are 5 elements, the middle should be 30
    findMiddle(); 
    
    return 0;
}