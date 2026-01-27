/*
Write a program in C to calculate the length of a string using a pointer.
*/

#include<stdio.h>
int main(){
char s[100];
char *p=s;
int len=0;
scanf("%s",s);
while(*p++){
len++;
}
printf("is : %d",len);
return 0;
}
