/*
Write a program in C to sort an array using a pointer.
*/

#include<stdio.h>
int main(){
int n,i,j,t,a[100];
int *p=a;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&p[i]);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(p[i]>p[j]){
t=p[i];
p[i]=p[j];
p[j]=t;
}
for(i=0;i<n;i++)
printf("element - %d : %d\n",i+1,p[i]);
return 0;
}
