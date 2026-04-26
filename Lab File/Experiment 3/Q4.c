#include <stdio.h>
#include <string.h>
#define MAX 100

char stack[MAX];
int top=-1;

void push(char x){ stack[++top]=x; }

char pop(){
    if(top==-1) return '\0';
    return stack[top--];
}

int match(char a,char b){
    return (a=='('&&b==')')||(a=='{'&&b=='}')||(a=='['&&b==']');
}

int main(){
    char exp[MAX]; int i;
    printf("Enter expression: ");
    scanf("%s",exp);

    for(i=0;i<strlen(exp);i++){
        if(exp[i]=='('||exp[i]=='{'||exp[i]=='[') push(exp[i]);
        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
            char t=pop();
            if(t=='\0'||!match(t,exp[i])){
                printf("Not balanced\n");
                return 0;
            }
        }
    }

    if(top==-1) printf("Balanced\n");
    else printf("Not balanced\n");

    return 0;
}