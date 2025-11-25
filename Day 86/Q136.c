//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include<stdio.h>
#include<string.h>

int main()
{
    enum Menu{ADD,SUBTRACT,MULTIPLY};
    char choice[10];
    int a,b;
    scanf("%s %d %d",choice,&a,&b);
    if(strcmp(choice,"ADD")==0){
        printf("%d",a+b);
    } else if(strcmp(choice,"SUBTRACT")==0){
        printf("%d",a-b);
    } else if(strcmp(choice,"MULTIPLY")==0){
        printf("%d",a*b);
    }
    return 0;
}
