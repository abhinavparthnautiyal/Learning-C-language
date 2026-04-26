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

int isStrict(struct node *root){
    if(root==NULL)
        return 1;
    if(root->left==NULL && root->right==NULL)
        return 1;
    if(root->left!=NULL && root->right!=NULL)
        return isStrict(root->left) && isStrict(root->right);
    return 0;
}

int main(){
    struct node *root;
    root=createTree();
    if(isStrict(root))
        printf("Strict binary tree\n");
    else
        printf("Not strict binary tree\n");
    return 0;
}
