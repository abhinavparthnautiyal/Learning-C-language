#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int stack[MAX],top=-1;

void push(int x){ stack[++top]=x; }
int pop(){ return stack[top--]; }

int main(){
    char pre[MAX],ch;
    int i,a,b,res;

    printf("Enter prefix: ");
    scanf("%s",pre);

    for(i=strlen(pre)-1;i>=0;i--){
        ch=pre[i];
        if(isdigit(ch)) push(ch-'0');
        else{
            a=pop(); b=pop();
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