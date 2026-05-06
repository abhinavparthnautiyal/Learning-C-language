/*Problem: Count nodes in a singly linked list.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the number of nodes in the list*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, value, count = 0;
    struct node *head = NULL, *tail = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            return 1;
        }
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;
        if (head == NULL) {
            head = tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    for (struct node *temp = head; temp != NULL; temp = temp->next) {
        count++;
    }
    printf("%d", count);
    return 0;
}
