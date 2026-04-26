#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top=-1;

void push(char x){ stack[++top]=x; }
char pop(){ return (top==-1)?'\0':stack[top--]; }
char peek(){ return (top==-1)?'\0':stack[top]; }

int prec(char x){
    if(x=='(') return 0;
    if(x=='+'||x=='-') return 1;
    if(x=='*'||x=='/'||x=='%') return 2;
    if(x=='^') return 3;
    return 0;
}

int main(){
    char in[MAX],post[MAX],ch;
    int i,j=0;

    printf("Enter infix: ");
    scanf("%s",in);

    for(i=0;i<strlen(in);i++){
        ch=in[i];
        if(isalnum(ch)) post[j++]=ch;
        else if(ch=='(') push(ch);
        else if(ch==')'){
            while(peek()!='(') post[j++]=pop();
            pop();
        }
        else{
            while(prec(peek())>=prec(ch)) post[j++]=pop();
            push(ch);
        }
    }

    while(top!=-1) post[j++]=pop();
    post[j]='\0';

    printf("Postfix: %s\n",post);
    return 0;
}