#include <stdio.h>
#include <stdlib.h>

struct node{
    int data,height;
    struct node *left,*right;
};

int max(int a,int b){
    if(a>b)
        return a;
    return b;
}

int height(struct node *root){
    if(root==NULL)
        return 0;
    return root->height;
}

struct node* createNode(int val){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Overflow\n");
        exit(0);
    }
    newNode->data=val;
    newNode->height=1;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

int balance(struct node *root){
    if(root==NULL)
        return 0;
    return height(root->left)-height(root->right);
}

struct node* rightRotate(struct node *y){
    struct node *x=y->left;
    struct node *t=x->right;
    x->right=y;
    y->left=t;
    y->height=max(height(y->left),height(y->right))+1;
    x->height=max(height(x->left),height(x->right))+1;
    return x;
}

struct node* leftRotate(struct node *x){
    struct node *y=x->right;
    struct node *t=y->left;
    y->left=x;
    x->right=t;
    x->height=max(height(x->left),height(x->right))+1;
    y->height=max(height(y->left),height(y->right))+1;
    return y;
}

struct node* insert(struct node *root,int val){
    int bf;
    if(root==NULL)
        return createNode(val);
    if(val<root->data)
        root->left=insert(root->left,val);
    else if(val>root->data)
        root->right=insert(root->right,val);
    else{
        printf("Duplicate not allowed\n");
        return root;
    }
    root->height=max(height(root->left),height(root->right))+1;
    bf=balance(root);
    if(bf>1 && val<root->left->data){
        printf("LL rotation\n");
        return rightRotate(root);
    }
    if(bf<-1 && val>root->right->data){
        printf("RR rotation\n");
        return leftRotate(root);
    }
    if(bf>1 && val>root->left->data){
        printf("LR rotation\n");
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
    if(bf<-1 && val<root->right->data){
        printf("RL rotation\n");
        root->right=rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

int main(){
    int ch,val;
    struct node *root=NULL;
    while(1){
        printf("\n----- AVL Tree Menu -----\n");
        printf("1. Insert\n");
        printf("2. Display tree\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: printf("Enter value: "); scanf("%d",&val); root=insert(root,val); break;
            case 2: if(root==NULL) printf("Empty\n"); else{ printf("Inorder: "); inorder(root); printf("\nPreorder: "); 
                preorder(root); printf("\n"); } break;
            case 3: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
