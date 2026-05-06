/*Problem: Insert values in a binary search tree and search a key.

Input:
- First line: integer n
- Second line: n integers
- Third line: key

Output:
- Print "Found" or "Not Found"*/
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *insert(struct node *root, int value) {
    if (root == NULL) {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL) {
            return NULL;
        }
        newnode->data = value;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

int search(struct node *root, int key) {
    if (root == NULL) {
        return 0;
    }
    if (root->data == key) {
        return 1;
    }
    return key < root->data ? search(root->left, key) : search(root->right, key);
}

int main() {
    int n, value, key;
    struct node *root = NULL;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        root = insert(root, value);
    }
    scanf("%d", &key);

    printf(search(root, key) ? "Found" : "Not Found");
    return 0;
}
