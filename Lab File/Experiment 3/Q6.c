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

void reverse(char s[]){
    int i,j; char t;
    for(i=0,j=strlen(s)-1;i<j;i++,j--){
        t=s[i]; s[i]=s[j]; s[j]=t;
    }
}

int main(){
    char in[MAX],pre[MAX],temp[MAX],ch;
    int i,j=0;

    printf("Enter infix: ");
    scanf("%s",in);

    reverse(in);
    for(i=0;i<strlen(in);i++){
        if(in[i]=='(') in[i]=')';
        else if(in[i]==')') in[i]='(';
    }

    for(i=0;i<strlen(in);i++){
        ch=in[i];
        if(isalnum(ch)) temp[j++]=ch;
        else if(ch=='(') push(ch);
        else if(ch==')'){
            while(peek()!='(') temp[j++]=pop();
            pop();
        }
        else{
            while(prec(peek())>prec(ch)) temp[j++]=pop();
            push(ch);
        }
    }

    while(top!=-1) temp[j++]=pop();
    temp[j]='\0';

    strcpy(pre,temp);
    reverse(pre);

    printf("Prefix: %s\n",pre);
    return 0;
}