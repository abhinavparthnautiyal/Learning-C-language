/*
Write a C program to demonstrate how a function returns a pointer.
*/

#include<stdio.h>
int* max(int *a,int *b){
if(*a>*b)
return a;
return b;
}
int main(){
int x,y;
scanf("%d%d",&x,&y);
printf("The number %d is larger.",*max(&x,&y));
return 0;
}
