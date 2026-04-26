#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* createNode(int val){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Overflow\n");
        exit(0);
    }
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

struct node* createTree(){
    int val;
    struct node *newNode;
    printf("Enter data (-1 for no node): ");
    scanf("%d",&val);
    if(val==-1)
        return NULL;
    newNode=createNode(val);
    printf("Left child of %d\n",val);
    newNode->left=createTree();
    printf("Right child of %d\n",val);
    newNode->right=createTree();
    return newNode;
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void mirror(struct node *root){
    struct node *temp;
    if(root==NULL)
        return;
    mirror(root->left);
    mirror(root->right);
    temp=root->left;
    root->left=root->right;
    root->right=temp;
}

int main(){
    struct node *root;
    root=createTree();
    printf("Original inorder: ");
    inorder(root);
    mirror(root);
    printf("\nMirror inorder: ");
    inorder(root);
    return 0;
}
