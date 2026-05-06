/*Problem: Implement queue using linked list.

Input:
- First line: integer n
- Second line: n integers to enqueue

Output:
- Print queue from front to rear*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, value;
    struct node *front = NULL, *rear = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            return 1;
        }
        scanf("%d", &value);
        newnode->data = value;
        newnode->next = NULL;
        if (front == NULL) {
            front = rear = newnode;
        } else {
            rear->next = newnode;
            rear = newnode;
        }
    }

    for (struct node *temp = front; temp != NULL; temp = temp->next) {
        printf("%d ", temp->data);
    }
    return 0;
}
