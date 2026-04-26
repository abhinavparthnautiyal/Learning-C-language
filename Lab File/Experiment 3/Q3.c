#include <stdio.h>
#define MAX 100

int stack[MAX],top=-1;

void push(int x){ stack[++top]=x; }
int pop(){ return stack[top--]; }

int main(){
    int n,i,a[MAX];
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n;i++) push(a[i]);
    for(i=0;i<n;i++) a[i]=pop();

    printf("Reversed list: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);

    return 0;
}