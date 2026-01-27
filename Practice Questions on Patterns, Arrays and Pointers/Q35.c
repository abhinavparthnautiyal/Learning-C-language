/*
Write a program in C to print the elements of an array in reverse order.
*/

#include<stdio.h>
int main(){
int n,i,a[15];
int *p=a;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&p[i]);
for(i=n-1;i>=0;i--)
printf("element - %d : %d\n",i+1,p[i]);
return 0;
}
