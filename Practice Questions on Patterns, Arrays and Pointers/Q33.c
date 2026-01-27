/*
Write a program in C to store n elements in an array and print them using a pointer.
*/

#include<stdio.h>
int main(){
int n,i,a[100];
int *p=a;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&p[i]);
for(i=0;i<n;i++)
printf("element - %d : %d\n",i,p[i]);
return 0;
}
