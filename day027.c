/*Problem: Reverse a singly linked list.

Input:
- First line: integer n
- Second line: n integers

Output:
- Print the reversed linked list*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, value;
    struct node *head = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            return 1;
        }
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = head;
        head = newnode;
    }

    for (struct node *temp = head; temp != NULL; temp = temp->next) {
        printf("%d ", temp->data);
    }
    return 0;
}
