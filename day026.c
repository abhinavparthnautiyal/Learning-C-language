/*Problem: Search a key in a singly linked list.

Input:
- First line: integer n
- Second line: n integers
- Third line: key

Output:
- Print the 1-based position of the key, or -1 if not found*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    int n, value, key, pos = 1;
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
    scanf("%d", &key);

    for (struct node *temp = head; temp != NULL; temp = temp->next) {
        if (temp->data == key) {
            printf("%d", pos);
            return 0;
        }
        pos++;
    }
    printf("-1");
    return 0;
}
