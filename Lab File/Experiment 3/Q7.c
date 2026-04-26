#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int stack[MAX],top=-1;

void push(int x){ stack[++top]=x; }
int pop(){ return stack[top--]; }

int main(){
    char post[MAX],ch;
    int i,a,b,res;

    printf("Enter postfix: ");
    scanf("%s",post);

    for(i=0;i<strlen(post);i++){
        ch=post[i];
        if(isdigit(ch)) push(ch-'0');
        else{
            b=pop(); a=pop();
            if(ch=='+') res=a+b;
            else if(ch=='-') res=a-b;
            else if(ch=='*') res=a*b;
            else if(ch=='/') res=a/b;
            else if(ch=='%') res=a%b;
            push(res);
        }
    }

    printf("Result = %d\n",pop());
    return 0;
}