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

void preorder(struct node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

void display(struct node *root){
    if(root==NULL){
        printf("Empty\n");
        return;
    }
    printf("Preorder: ");
    preorder(root);
    printf("\nInorder: ");
    inorder(root);
    printf("\nPostorder: ");
    postorder(root);
    printf("\n");
}

int totalNodes(struct node *root){
    if(root==NULL)
        return 0;
    return 1+totalNodes(root->left)+totalNodes(root->right);
}

int leafNodes(struct node *root){
    if(root==NULL)
        return 0;
    if(root->left==NULL && root->right==NULL)
        return 1;
    return leafNodes(root->left)+leafNodes(root->right);
}

int internalNodes(struct node *root){
    if(root==NULL || (root->left==NULL && root->right==NULL))
        return 0;
    return 1+internalNodes(root->left)+internalNodes(root->right);
}

int height(struct node *root){
    int lh,rh;
    if(root==NULL)
        return 0;
    lh=height(root->left);
    rh=height(root->right);
    if(lh>rh)
        return lh+1;
    return rh+1;
}

int main(){
    int ch;
    struct node *root=NULL;
    while(1){
        printf("\n----- Binary Tree Menu -----\n");
        printf("1. Create tree\n");
        printf("2. Display traversals\n");
        printf("3. Count total nodes\n");
        printf("4. Count leaf nodes\n");
        printf("5. Count internal nodes\n");
        printf("6. Find height\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: root=createTree(); break;
            case 2: display(root); break;
            case 3: printf("Total nodes = %d\n",totalNodes(root)); break;
            case 4: printf("Leaf nodes = %d\n",leafNodes(root)); break;
            case 5: printf("Internal nodes = %d\n",internalNodes(root)); break;
            case 6: printf("Height = %d\n",height(root)); break;
            case 7: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
