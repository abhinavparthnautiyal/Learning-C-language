/*Problem: Implement stack using linked list.

Input:
- First line: integer n
- Second line: n integers to push

Output:
- Print stack from top to bottom*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, value;
    struct node *top = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            return 1;
        }
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = top;
        top = newnode;
    }

    for (struct node *temp = top; temp != NULL; temp = temp->next) {
        printf("%d ", temp->data);
    }
    return 0;
}
