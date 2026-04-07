#include<stdio.h>
#include<stdlib.h>
 struct btnode 
 {
    struct btnode *lp;
    struct btnode *rp;
    int data;
 };

 struct btnode* insert(struct btnode *P) {
    int n;
    printf("Enter how many elements you want to insert: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int value;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);

        struct btnode *newnode = (struct btnode*)malloc(sizeof(struct btnode));

        if(newnode == NULL) {
            printf("Memory allocation failed.\n");
            return P;
        }

        newnode->data = value;
        newnode->lp = NULL;
        newnode->rp = NULL;
        if(P == NULL) {
            P = newnode;
        }
        else {
            struct btnode *temp = P;
            struct btnode *parent = NULL;

            while(temp != NULL) {
                parent = temp;

                if(value < temp->data) {
                    temp = temp->left;
                }
                else {
                    temp = temp->right;
                }
            }
            if(value < parent->data) {
                parent->lp= newnode;
            }
            else {
                parent->rp = newnode;
            }
        }
    }
    return P;
}

struct btnode* search(struct btnode* P, int item){
    if(item == P->data)
    return P;
    else if(item < P->data)
    return search(P->left,item)
    else
    return search(P->right,item)
    printf("The required element does not exist");
}

struct btnode* delete(struct btnode*P, int item)

int noleafnodes(struct btnode* P){
    int XL=XR=0;   
    if(P == NULL)
    return 0;
    else{
        if(P->lp == NULL && P->rp == NULL)
        return 1;
        else
        {
            XL= noleafnodes(P->lp)
            XR= noleafnodes(P->rp)
            return(XL+XR)
        }
    }
}

int nointernalnodes(struct btnode* P){
    int XL=XR=0;
    if(P == NULL)
    return 0;
    else{
        if(P->lp == NULL && P->rp == NULL)
        return 0;
        else{
            XL= nointernalnodes(P->lp)
            XR= nointernalnodes(P->rp)
            return(1+XL+XR)
    }
}
}

int heighttree(struct btnode* P){
    int XL=XR=0;
    if(P == NULL)
    return 0;
    else{
        if(P->lp == NULL && P->rp == NULL)
        return 0;
        else{
            XL= heighttree(P->lp)
            XR= heighttree(P->rp)
            if(XL < XR)
            return (XL+1)
            else
            return(XR+1)
        }
}
}

int isStrict(struct btnode* P) {
    if(P == NULL)
        return 1;
    if(P->lp == NULL && P->rp == NULL)
        return 1;
    if(P->lp != NULL && P->rp != NULL)
        return isStrict(P->lp) && isStrict(P->rp);
    return 0;
}

 int main(){
struct btnode* p = NULL;
printf("Press 1 to insert a value in a binary search tree\nPress 2 to search an element no. of leaf nodes\nPress 3 to find the no. of leaf nodes\nPress 4 to find the no. of internal nodes\n Press 5 to find the height of the tree\n Press 6 to check whetherthe tree is a");
 }