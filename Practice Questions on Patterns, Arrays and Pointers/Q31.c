/*
Write a program in C to find the maximum number between two numbers using a pointer.
*/

#include<stdio.h>
int main(){
int a,b;
int *p=&a,*q=&b;
scanf("%d%d",&a,&b);
if(*p>*q)
printf("%d is the maximum number.",*p);
else
printf("%d is the maximum number.",*q);
return 0;
}
