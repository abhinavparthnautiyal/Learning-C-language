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

struct node* insert(struct node *root,int val){
    if(root==NULL)
        return createNode(val);
    if(val<root->data)
        root->left=insert(root->left,val);
    else if(val>root->data)
        root->right=insert(root->right,val);
    else
        printf("Duplicate not allowed\n");
    return root;
}

struct node* search(struct node *root,int val){
    if(root==NULL || root->data==val)
        return root;
    if(val<root->data)
        return search(root->left,val);
    return search(root->right,val);
}

struct node* minNode(struct node *root){
    while(root->left!=NULL)
        root=root->left;
    return root;
}

struct node* deleteNode(struct node *root,int val){
    struct node *temp;
    if(root==NULL){
        printf("Not found\n");
        return root;
    }
    if(val<root->data)
        root->left=deleteNode(root->left,val);
    else if(val>root->data)
        root->right=deleteNode(root->right,val);
    else{
        if(root->left==NULL){
            temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            temp=root->left;
            free(root);
            return temp;
        }
        temp=minNode(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
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

void largest(struct node *root){
    if(root==NULL){
        printf("Empty\n");
        return;
    }
    while(root->right!=NULL)
        root=root->right;
    printf("Largest = %d\n",root->data);
}

int main(){
    int ch,val;
    struct node *root=NULL;
    while(1){
        printf("\n----- BST Menu -----\n");
        printf("1. Insert node\n");
        printf("2. Search node\n");
        printf("3. Delete node\n");
        printf("4. Display inorder\n");
        printf("5. Find largest\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1: printf("Enter value: "); scanf("%d",&val); root=insert(root,val); break;
            case 2: printf("Enter value: "); scanf("%d",&val); if(search(root,val)!=NULL) printf("Found\n"); else printf("Not found\n"); break;
            case 3: printf("Enter value: "); scanf("%d",&val); root=deleteNode(root,val); break;
            case 4: if(root==NULL) printf("Empty\n"); else{ inorder(root); printf("\n"); } break;
            case 5: largest(root); break;
            case 6: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
