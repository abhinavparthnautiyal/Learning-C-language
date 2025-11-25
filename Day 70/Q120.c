//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char s[1000];
    fgets(s,1000,stdin);
    int i;
    s[strcspn(s,"\n")]=0;
    if(s[0]) s[0]=toupper(s[0]);
    for(i=1;s[i];i++){
        if(s[i-1]==' ' && isalpha(s[i])) s[i]=toupper(s[i]);
        else s[i]=tolower(s[i]);
    }
    printf("%s",s);
    return 0;
}
