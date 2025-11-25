//Develop a recursive function REVERSE (str) that accepts a string argument. Write a C program that invokes this function to find the reverse of a given string.
#include<stdio.h>
#include<string.h>

void REVERSE(char *s,int i)
{
    if(i<0) return;
    printf("%c",s[i]);
    REVERSE(s,i-1);
}

void main()
{
    char str[100];
    printf("Enter a string:\n");
    scanf("%s",str);
    REVERSE(str,strlen(str)-1);
}
